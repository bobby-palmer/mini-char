#include <cmath>
#include <cstring>
#include "../include/minichar.h"

const int COMP_WIDTH = 5;
const int CHUNK_WIDTH = 8;

char* encode(char* str) {
  int numChunks = std::floor(strlen(str) / 8 + 1);
  char* res = new char[numChunks * CHUNK_WIDTH + 1];
  res[numChunks * CHUNK_WIDTH] = '\0';
  for (int num = 0; num < numChunks; ++num) {
    char c1 = guardRange(str, num * CHUNK_WIDTH + 0);
    char c2 = guardRange(str, num * CHUNK_WIDTH + 1);
    char c3 = guardRange(str, num * CHUNK_WIDTH + 2);
    char c4 = guardRange(str, num * CHUNK_WIDTH + 3);
    char c5 = guardRange(str, num * CHUNK_WIDTH + 4);
    char c6 = guardRange(str, num * CHUNK_WIDTH + 5);
    char c7 = guardRange(str, num * CHUNK_WIDTH + 6);
    char c8 = guardRange(str, num * CHUNK_WIDTH + 7);
    res[num * COMP_WIDTH] = (c1 << 3) | (c2 >> 2);
    res[num * COMP_WIDTH + 1] = (c2 << 6) | (c3 << 1) | (c4 >> 4);
    res[num * COMP_WIDTH + 2] = (c4 << 4) | (c5 >> 1);
    res[num * COMP_WIDTH + 3] = (c5 << 7) | (c6 << 2) | (c7 >> 3);
    res[num * COMP_WIDTH + 4] = (c7 << 5) | (c8);
  }
  return res;
}

char* decode(char* str) {
  // for compilation
  return 0x00;
}

char guardRange(char *str, int i) {
  if (i < strlen(str)) {
    // TODO
    return 0x01;
  }
  return 0x1e;
}
