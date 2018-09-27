#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
#include <cstring>

#include "test.h"
#include "utils.h"
using namespace std;

void UtilsTest::testParseLine() {
  BYTE* testStr[4] = {"rnbakabnr", "9", "1c5c1", "p1p1p1p1p"};
  BYTE exceptResult[4][9] = {{'r','n','b','a','k','a','b','n','r'}, {0,0,0,0,0,0,0,0,0},
                             {0,'c',0,0,0,0,0,'c',0}, {'p',0,'p',0,'p',0,'p',0,'p'}};
  for (int i = 0; i < 4; i++) {
    BYTE reallyResult[9] = {9};
    Utils::parseLine(testStr[i],reallyResult);
    char msg[50];
    sprintf(msg, "%s %d %s","this is the", i, "time.");
    CPPUNIT_ASSERT_MESSAGE(msg, memcmp(exceptResult[i], reallyResult, 9)==0);
  }
}

void UtilsTest::testParse() {
  char testFen[] = "rnbakabnr/9/1c5c1/p1p1p1p1p/9/9/P1P1P1P1P/1C5C1/9/RNBAKABNR w - - 0 1";
  BYTE exceptResult[256] =  {
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 'r', 'n', 'b', 'a', 'k', 'a', 'b', 'n', 'r', 0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 0,   'c', 0,   0,   0,   0,   0,   'c', 0,   0, 0, 0, 0,
    0, 0, 0, 'p', 0,   'p', 0,   'p', 0,   'p', 0,   'p', 0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 'P', 0,   'P', 0,   'P', 0,   'P', 0,   'P', 0, 0, 0, 0,
    0, 0, 0, 0,   'C', 0,   0,   0,   0,   0,   'C', 0,   0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 'R', 'N', 'B', 'A', 'K', 'A', 'B', 'N', 'R', 0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0,
    0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0};

    BYTE reallyResult[256] = {0};
    Utils::parse(testFen, reallyResult);
    CPPUNIT_ASSERT(memcmp(exceptResult, reallyResult, 256)==0);
}