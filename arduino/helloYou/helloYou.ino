#include <ArduinoJson.h>

#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanelHalfScan.h> // Hardware-specific library

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
}

void loop() {
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
  }
}  
