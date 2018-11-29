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


int led = 13; // led that we will toggle
char inChar;  // character we will use for messages from the RPi

int button = 2;
int buttonState;
int rows;
int r; 
int g; 
int b;
int rowsFilled = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  matrix.begin();
}

void loop() {
  // read the character we recieve on the serial port from the RPi
  if(Serial.available()) {
    //inChar = (char)Serial.read();
    String result = Serial.readString();
    Serial.println(result);
    //Serial.println(result);
     if(result){
      matrix.drawPixel(0, 0, matrix.Color333(0, 255, 0));
    }
  }


  // if we get a 'H', turn the LED on, else turn it off
  if(inChar == 'H'){
    digitalWrite(led, HIGH);
    matrix.drawPixel(0, 0, matrix.Color333(0, 255, 0));
  }
  else{
    digitalWrite(led, LOW);

//    //10 will be the variable
//    rows = 1;
//    r = 0;
//    g = 0;
//    b = 0;
//    
//    for (int i = rowsFilled; i < rows; i++){
//      for (int j = 0; j < 32; j++) {
//        //r = arr[i*4];
//        //g = arr[i*4+1];
//        //b = arr[i*4+2];    
//        //uint16_t color = matrix.Color333(r,g,b);
//        matrix.drawPixel(j, i, matrix.Color333(0, 255, 0));    
//            //matrix.drawPixel(i, 0, color);
//      }
//    } 
//    rowsFilled = rowsFilled + rows;
//
//    rows = 1;
//    r = 0;
//    g = 0;
//    b = 0;
//    
//    for (int i = rowsFilled; i < rows; i++){
//      for (int j = 0; j < 32; j++) {
//        //r = arr[i*4];
//        //g = arr[i*4+1];
//        //b = arr[i*4+2];    
//        //uint16_t color = matrix.Color333(r,g,b);
//        matrix.drawPixel(j, i, matrix.Color333(0, 255, 0));    
//            //matrix.drawPixel(i, 0, color);
//      }
//    }  
//    rowsFilled += rows;
//    
    //matrix.drawPixel(0, 2, matrix.Color333(255, 0, 0));
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
