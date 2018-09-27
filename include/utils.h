#pragma once
#include <iostream>

class Utils {
 friend class UtilsTest;
 public:
  static int addFiveForTest(int num);
  static int addThree(int num);
};
