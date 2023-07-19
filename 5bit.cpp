#include "5bit.h"
#include <cstring>
#include <iostream>
using namespace std;

Buffer::Buffer(char* str){
  a = encode_char(str[0]);
}
char* encode(char *str){
  uint len = strlen(str);
  // for compilation
  return new char[0];
}

char encode_char(char letter){
  // currently only work for lowercase alphabetical
  return letter - 'a';
}
