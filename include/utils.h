#pragma once
#include <iostream>

class Utils {
 friend class UtilsTest;
 public:
  static int parse(char* fen, char* board);

 private: 
  inline static int line2Index(int line){
    return 35 + (line << 4); //line * 16
  }
  static int parseLine(char* line, char* start);
};
