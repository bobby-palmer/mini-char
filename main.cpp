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
  public:
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
};

int main(){
  char letters[9] = "abcdefgh";
  Buf b = Buf(letters);
  char* ptr = (char*)&b;
  for(int i = 0; i < 5; i++){
    cout << ptr[i];
  }
}

