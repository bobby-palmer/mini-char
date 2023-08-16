#include <cstring>
char* encode(char* str) {
  int len = std::strlen(str);
  int adjLen = len + (8 - len % 8);
  // extra character for null byte
  char* sized = new char[adjLen + 1];
  for (int i = 0; i < len; ++i) {
    sized[i] = str[i];
  }
  for (int i = len; i < adjLen; i++) {
    sized[i] = '%';
  }
}
