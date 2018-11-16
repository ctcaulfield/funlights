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

int button = 2;
int buttonState;

void setup() {
  
  Serial.begin(9600);
  
  matrix.begin();
  
  //pinMode(button, INPUT);

  // One 1D row of 32 RGBA pixels
  // its values are {r0, g0, b0, a0, r1, g1, b1, a1, ... ,r31, g31, b31, a31}
  // This will be sent via serial but is hardcoded for now.
  uint8_t rgba[128] = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
  showRow(rgba);

}

void loop() {
  /*
  // read the character we recieve on the serial port from the RPi
  if(Serial.available()) {
    String data = (String)Serial.read();
    Serial.print(data);
  }
*/
  /*
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
  }*/
}


// The following is NOT working. 
// See https://github.com/sparkfunX/RGBmatrixPanelHalfScan/blob/master/RGBmatrixPanelHalfScan.h for function specs for Color333/Color888/drawPixel etc. 
void showRow(uint8_t arr[128]) {

  uint8_t r, g, b = 0;
  
  for (int i = 0; i < 32; i++) {
    
      r = arr[i*4];
      g = arr[i*4+1];
      b = arr[i*4+2];
      
      uint16_t color = matrix.Color333(r,g,b);
      
      Serial.println(i); /*
      Serial.print(":");
      Serial.print(r);
      Serial.print(",");
      Serial.print(g);
      Serial.print(",");
      Serial.println(b); */

      //matrix.drawPixel(i, 0, color);
  }
}
  
