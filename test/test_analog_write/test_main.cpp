#include <Arduino.h>
#include <avr/io.h>
#include <unity.h>

void test_analog_write_on_pin_11() {
  analogWrite(11, 127);
  TEST_ASSERT_EQUAL_UINT8(127, OCR2A);
}

void test_analog_write_on_pin_9() {
  analogWrite(9, 200);
  TEST_ASSERT_EQUAL_UINT8(200, OCR1A);
}

void test_analog_write_on_pin_6() {
  analogWrite(6, 64);
  TEST_ASSERT_EQUAL_UINT8(64, OCR0A);
}

void setup() {
  UNITY_BEGIN();
  RUN_TEST(test_analog_write_on_pin_11);
  RUN_TEST(test_analog_write_on_pin_9);
  RUN_TEST(test_analog_write_on_pin_6);
  UNITY_END();
}

void loop() {}
