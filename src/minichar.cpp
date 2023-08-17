#include <cmath>
#include <cstring>
#include "../include/minichar.h"

const int chunkWidth = 5;

char* encode(char* str) {
  int numChunks = std::floor(strlen(str) / 8 + 1);
  char* res = new char[numChunks * chunkWidth + 1];
  res[numChunks * chunkWidth] = '\0';
  for (int num = 0; num < numChunks; ++num) {
    char c1 = guardRange(str, num * chunkWidth + 0);
    char c2 = guardRange(str, num * chunkWidth + 1);
    char c3 = guardRange(str, num * chunkWidth + 2);
    char c4 = guardRange(str, num * chunkWidth + 3);
    char c5 = guardRange(str, num * chunkWidth + 4);
    char c6 = guardRange(str, num * chunkWidth + 5);
    char c7 = guardRange(str, num * chunkWidth + 6);
    char c8 = guardRange(str, num * chunkWidth + 7);
    char f1 = (c1 << 3) | (c2 >> 2);
    char f2 = (c2 << 6) | (c3 << 1) | (c4 >> 4);
    char f3 = (c4 << 4) | (c5 >> 1);
    char f4 = (c5 << 7) | (c6 << 2) | (c7 >> 3);
    char f5 = (c7 << 5) | (c8);
  }
  return res;
}

char* decode(char* str) {
  // for compilation
  return 0x00;
}

char guardRange(char *str, int i) {
  //for compilation
  return 'a';
}
