//
#include <iostream>
using namespace std;
struct Buf{
  unsigned char x1: 5;
  unsigned char x2: 5;
  unsigned char x3: 5;
  unsigned char x4: 5;
  unsigned char x5: 5;
  unsigned char x6: 5;
  unsigned char x7: 5;
  unsigned char x8: 5;
  Buf(char* letters){
    x1 = letters[0] - 'a';
    x2 = letters[1] - 'a';
    x3 = letters[2] - 'a';
    x4 = letters[3] - 'a';
    x5 = letters[4] - 'a';
    x6 = letters[5] - 'a';
    x7 = letters[6] - 'a';
    x8 = letters[7] - 'a';
  }
  char* decode(){
    char* str = new char[9];
    str[0] = x1 + 'a';
    str[1] = x2 + 'a';
    str[2] = x3 + 'a';
    str[3] = x4 + 'a';
    str[4] = x5 + 'a';
    str[5] = x6 + 'a';
    str[6] = x7 + 'a';
    str[7] = x8 + 'a';
    return str;
  }
};
