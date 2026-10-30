#include <Arduino.h>
#include <rgb_stuff.hpp>

#define RED_PIN 11
#define GREEN_PIN 9
#define BLUE_PIN 6

static Color color = Color::red;

void setColor(Rgb rgb) {
  analogWrite(RED_PIN, rgb.r);
  analogWrite(GREEN_PIN, rgb.g);
  analogWrite(BLUE_PIN, rgb.b);
}

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {

  Rgb rgb = getRgb(color);
  color = nextColor(color);
  setColor(rgb);

  delay(500);
}