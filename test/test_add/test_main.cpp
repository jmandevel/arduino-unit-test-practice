#include <test_example.hpp>
#include <unity.h>

void test_addition() { TEST_ASSERT_EQUAL_INT(5, my_testable::add(2, 3)); }

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_addition);
  return UNITY_END();
}
