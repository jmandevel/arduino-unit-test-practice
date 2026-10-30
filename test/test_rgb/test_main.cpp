#include <rgb_stuff.hpp>
#include <unity.h>

void test_state_change() {
    TEST_ASSERT_TRUE(nextColor(Color::red) == Color::orange);
    TEST_ASSERT_TRUE(nextColor(Color::orange) == Color::yellow);
    TEST_ASSERT_TRUE(nextColor(Color::yellow) == Color::green);
    TEST_ASSERT_TRUE(nextColor(Color::green) == Color::blue);
    TEST_ASSERT_TRUE(nextColor(Color::blue) == Color::indigo);
    TEST_ASSERT_TRUE(nextColor(Color::indigo) == Color::violet);
    TEST_ASSERT_TRUE(nextColor(Color::violet) == Color::red);
}

void test_get_rgb() {
  TEST_ASSERT_TRUE(getRgb(Color::red) == Rgb(255, 0, 0));
  TEST_ASSERT_TRUE(getRgb(Color::orange) == Rgb(255, 165, 0));
  TEST_ASSERT_TRUE(getRgb(Color::yellow) == Rgb(255, 255, 0));
  TEST_ASSERT_TRUE(getRgb(Color::green) == Rgb(0, 255, 0));
  TEST_ASSERT_TRUE(getRgb(Color::blue) == Rgb(0, 0, 255));
  TEST_ASSERT_TRUE(getRgb(Color::indigo) == Rgb(75, 0, 130));
  TEST_ASSERT_TRUE(getRgb(Color::violet) == Rgb(238, 130, 238));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_state_change);
  RUN_TEST(test_get_rgb);
  return UNITY_END();
}
