#pragma once

#include <cppunit/extensions/HelperMacros.h>

class UtilsTest : public CppUnit::TestFixture {
   CPPUNIT_TEST_SUITE( UtilsTest );
   CPPUNIT_TEST( testAddFive );
   CPPUNIT_TEST( testAddThree );
   CPPUNIT_TEST_SUITE_END();
 public:
    UtilsTest(){}  
    void setUp(){};  
    void tearDown(){};  
    void testAddFive();
    void testAddThree();
 };
