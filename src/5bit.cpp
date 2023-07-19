#include "5bit.h"
#include <cstring>
#include <iostream>
using namespace std;

Buffer::Buffer(char* str){
  a = encode_char(str[0]);
  b = encode_char(str[1]);
  c = encode_char(str[2]);
  d = encode_char(str[3]);
  e = encode_char(str[4]);
  f = encode_char(str[5]);
  g = encode_char(str[6]);
  h = encode_char(str[7]);
}

char encode_char(char letter){
  // currently only work for lowercase alphabetical
  return letter - 'a';
}
