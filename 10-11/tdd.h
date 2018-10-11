#ifndef TDD_H
#define TDD_H

#include <string>

void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message=""); // default parameter
    // if you don't supply anything for message,
    // (i.e., call assertEquals with only 2 args.),
    // then message gets set to ""

void assertEquals(int expected, 
		  int actual, 
		  std::string message="");


#define ASSERT_EQUALS(expected,actual) assertEquals(expected,actual,#actual)


void assertTrue(bool expression, std::string message="");

#define ASSERT_TRUE(expression) assertTrue(expression,#expression)

void startTestGroup(std::string name);

#define START_TEST_GROUP(name) startTestGroup(name)

#endif // TDD_H
