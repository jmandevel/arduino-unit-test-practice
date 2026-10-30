# Arduino Unit Test Practice

Let's practice writing unit tests for Arduino using PlatformIO! Make sure you are using Visual Studio Code and have the PlatformIO extension installed. 

## Example Tests

This project contains two example tests to help you understand how to write unit tests with PlatformIO. The tests are located in subfolders in the <test> folder. 

### Native Tests

The test in <test/test_add> contains tests for the `add` function defined in <lib/test_example/test_example.hpp>. Note that this test has a main function, and is not intended to be run on an Arduino. We should try to create tests in this way wherever possible, because tests like this can be automatically run through Continuous Integration every time we make a commit to GitHub. 

### Embedded Tests

The test in <test/test_analog_write> contains a test that is designed to run on an Arduino board. This test must be uploaded to an Arduino device before it can be run. Tests like this have to manually be run by us directly with the device we are developing our code for. This means that they are not compatible with CI, so they are more cumbersome for us to work with. We should prefeer tests that can run through CI wherever possible.

## Let's Write Some Tests!

Take a look at <src/main.cpp>. This is a simple Arduino program that alternates an LED through every color of the rainbow. How can we make unit tests for this code? Can we modify the source code to make it easier to test?

Go ahead and make some tests for the Arduino program. If you want to be able include a header file with functions in both tests and the Arduino program, move them to source files within a subfolder of the lib folder. Look at how the test_example folder is organized if you are confused.

A solution can be found in the answer branch of this repository.