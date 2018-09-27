#pragma once

#include <cppunit/extensions/HelperMacros.h>

class UtilsTest : public CppUnit::TestFixture {
   CPPUNIT_TEST_SUITE( UtilsTest );
   CPPUNIT_TEST( testParse );
   CPPUNIT_TEST( testParseLine );
   CPPUNIT_TEST_SUITE_END();
 public:
    UtilsTest(){}  
    void setUp(){};  
    void tearDown(){};  
    void testParseLine();
    void testParse();
 };
