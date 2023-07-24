#include "5bit.h"
#include <cstring>
#include <iostream>
using namespace std;

Buffer::Buffer(char* str){
  char* sized_str = new char[9];
  for(uint i = 0; i < 8 && i < strlen(str); i++){
    if(i < strlen(str)){
      sized_str[i] = str[i];
    } else {
      sized_str[i] = '%';
    }
  }
  a = encode_char(sized_str[0]);
  b = encode_char(sized_str[1]);
  c = encode_char(sized_str[2]);
  d = encode_char(sized_str[3]);
  e = encode_char(sized_str[4]);
  f = encode_char(sized_str[5]);
  g = encode_char(sized_str[6]);
  h = encode_char(sized_str[7]);
}

char encode_char(char letter){
  if (letter == '%'){
    return 26;
  }
  return letter - 'a';
}
char decode_char(char letter) {
  if (letter == 26){
    return '\0';
  } else {
    return letter + 'a';
  }
}
