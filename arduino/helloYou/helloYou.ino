#include <ArduinoJson.h>

#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanelHalfScan.h> // Hardware-specific library
#include "anger.h"
#include "joy.h"
#include "sadness.h"
#include "surprise.h"
#include "q.h"

#define CLK 11  // MUST be on PORTB! (Use pin 11 on Mega)
#define OE  9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2

RGBmatrixPanelHalfScan matrix(A, B, C, CLK, LAT, OE, false);

char result;

int button = 8;
int buttonState;

void setup() {
  Serial.begin(9600);
  //pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  matrix.begin();

  // demonstrate states
  circleAnimation("anger");
  circleAnimation("sadness");
  circleAnimation("joy");
  circleAnimation("surprise");
  circleAnimation("q");

}

void loop() {
  /*

  // read the character we recieve on the serial port from the RPi
  if(Serial.available()) {
    //inChar = (char)Serial.read();
    //String result = Serial.readString();
    result = (char)Serial.read();
    Serial.println(result);
    //Serial.println(result);
    if(result == 'J'){
      matrix.fillScreen(matrix.Color333(0, 255, 0));
    } else if(result == 'S'){
      matrix.fillScreen(matrix.Color333(0, 0, 255));
    } else if(result == 'B'){
      matrix.fillScreen(matrix.Color333(7, 0, 0));
    } else if(result == 'U'){
      matrix.fillScreen(matrix.Color333(255, 255, 0));
    } else if (result=='Q'){
      matrix.fillScreen(matrix.Color333(2, 0, 7));
    } else {
      matrix.fillScreen(matrix.Color333(0,0,0));
    }   
  }

  // Button event checker - if pressed, send message to RPi
  int newState = digitalRead(button);
  if (buttonState != newState) {
    buttonState = newState;
    if(buttonState == HIGH){
      Serial.println("light"); //note println put a /r/n at the end of a line
    }
    else{
      Serial.println("dark");
    }
  } */
}  


void circleAnimation(String emotion) {

  //White circles of thinking
  for (int i = 23; i > 0; i--) {
    matrix.drawCircle(15, 15, i, matrix.Color333(7, 7, 7));
    delay(50);
    matrix.fillScreen(matrix.Color333(0,0,0));
  }

  for (int i = 0; i < 23; i++) {
    matrix.drawCircle(15, 15, i, matrix.Color333(7, 7, 7));
    delay(50);
    matrix.fillScreen(matrix.Color333(0,0,0));
  }

  for (int i = 23; i > 0; i--) {
    matrix.drawCircle(15, 15, i, matrix.Color333(7, 7, 7));
    delay(50);
    matrix.fillScreen(matrix.Color333(0,0,0));
  }
  
  if (emotion == "anger") {
    
    for (int i = 0; i < 28; i++) {
      matrix.drawCircle(15, 15, i, matrix.Color333(7, 7, 7));
      if (i-2 > 0) { matrix.drawCircle(15, 15, i-2, matrix.Color333(7, 7, 0)); }
      if (i-4 > 0) { 
        matrix.drawCircle(15, 15, i-4, matrix.Color333(7, 0, 0)); 
      }
      delay(50);
      matrix.fillScreen(matrix.Color333(0,0,0));
    }

    delay(500);

    int     i, len;
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  
    // Copy image from PROGMEM to matrix buffer:
    memcpy_P(ptr, anger, sizeof(anger));

  }

  else if (emotion == "sadness") {
     for (int i = 0; i < 28; i++) {
      matrix.drawCircle(15, 15, i, matrix.Color333(7, 7, 7));
      if (i-2 > 0) { matrix.drawCircle(15, 15, i-2, matrix.Color333(0, 7, 0)); }
      if (i-4 > 0) { 
        matrix.drawCircle(15, 15, i-4, matrix.Color333(0, 4, 7)); 
      }
      delay(50);
      matrix.fillScreen(matrix.Color333(0,0,0));
    }

    delay(500);

    int     i, len;
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  
    // Copy image from PROGMEM to matrix buffer:
    memcpy_P(ptr, sadness, sizeof(sadness));
  }

  else if (emotion == "surprise") {
     for (int i = 0; i < 28; i++) {
      matrix.drawCircle(15, 15, i, matrix.Color333(7, 7, 7));
      if (i-2 > 0) { matrix.drawCircle(15, 15, i-2, matrix.Color333(7, 7, 0)); }
      if (i-4 > 0) { 
        matrix.drawCircle(15, 15, i-4, matrix.Color333(7, 4, 0)); 
      }
      delay(50);
      matrix.fillScreen(matrix.Color333(0,0,0));
    }

    delay(500);

    int     i, len;
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  
    // Copy image from PROGMEM to matrix buffer:
    memcpy_P(ptr, surprise, sizeof(surprise));
  }

  else if (emotion == "joy") {
     for (int i = 0; i < 28; i++) {
      matrix.drawCircle(15, 15, i, matrix.Color333(7, 7, 7));
      if (i-2 > 0) { matrix.drawCircle(15, 15, i-2, matrix.Color333(7, 7, 0)); }
      if (i-4 > 0) { 
        matrix.drawCircle(15, 15, i-4, matrix.Color333(0, 7, 0)); 
      }
      delay(50);
      matrix.fillScreen(matrix.Color333(0,0,0));
    }

    delay(500);

    int     i, len;
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  
    // Copy image from PROGMEM to matrix buffer:
    memcpy_P(ptr, joy, sizeof(joy));
  }

  else if (emotion == "q") {
    for (int i = 0; i < 28; i++) {
      matrix.drawCircle(15, 15, i, matrix.Color333(7, 7, 7));
      if (i-2 > 0) { matrix.drawCircle(15, 15, i-2, matrix.Color333(0, 0, 7)); }
      if (i-4 > 0) { 
        matrix.drawCircle(15, 15, i-4, matrix.Color333(4, 0, 7)); 
      }
      delay(50);
      matrix.fillScreen(matrix.Color333(0,0,0));
    }

    delay(500);

    int     i, len;
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  
    // Copy image from PROGMEM to matrix buffer:
    memcpy_P(ptr, q, sizeof(q));
    
  }

  delay(2000);
} 
