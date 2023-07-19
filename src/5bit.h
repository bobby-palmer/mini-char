char encode_char(char letter);

struct Buffer{
  unsigned char a: 5;
  unsigned char b: 5;
  unsigned char c: 5;
  unsigned char d: 5;
  unsigned char e: 5;
  unsigned char f: 5;
  unsigned char g: 5;
  unsigned char h: 5;

  Buffer(char* str);
};
