#include <Arduino.h>

#define RED_PIN 11
#define GREEN_PIN 9
#define BLUE_PIN 6

enum class Color {
  red, orange, yellow, green, blue, indigo, violet
};

static Color color = Color::red;

void setColor(unsigned char r, unsigned char g, unsigned char b){
  analogWrite(RED_PIN, r);
  analogWrite(GREEN_PIN, g);
  analogWrite(BLUE_PIN, b);
}

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  
  switch(color){
   case Color::red: {
     setColor(255, 0, 0);
     color = Color::orange;
   } break;

   case Color::orange:{
     setColor(255, 165, 0);
     color = Color::yellow;
   } break;

   case Color::yellow: {
     setColor(255, 255, 0);
     color = Color::green;
   } break;

   case Color::green:{
       setColor(0, 255, 0);
       color = Color::blue;
   } break;

   case Color::blue:{
     setColor(0, 0, 255);
     color = Color::indigo;
   } break;

   case Color::indigo:{
     setColor(75, 0, 130);
     color = Color::violet;
   } break;

   case Color::violet:{
     setColor(238, 130, 238);
     color = Color::red; 
   } break;
  }

  delay(500);
}