#include <cstring>

#include "utils.h"

int Utils::parse(char* fen, char* board) {
    char* cur = fen;
    char* next;
    for(int i=0; i<10; i++){
        next = strsep(&cur, "/"); 
        Utils::parseLine(next, board + Utils::line2Index(i+1));
        cur += strlen(next - 1);
    }
    return 1;
}

int Utils::parseLine(char* line, char* start) {
  char temp[9] = {0};
  memcpy(start, temp, 9);
  for (int i = 0, cur = 0; line[i] && line[i]!=' '; i++) {
    if (line[i] <= '9') {
      cur += line[i] - '0';
    } else {
      start[cur] = line[i];
      cur++;
    }
  }
  return 1;
}
