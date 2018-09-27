#include <cppunit/extensions/HelperMacros.h>
#include <iostream>

#include "utils.h"
#include "test.h"

void UtilsTest::testAddFive() { 
  CPPUNIT_ASSERT (Utils::addFiveForTest(2) == 7);
}

void UtilsTest::testAddThree() { 
  CPPUNIT_ASSERT (Utils::addThree(2) == 5) ;
}