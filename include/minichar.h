/*
* Creates a compressed c string from the input string
*/
char* encode(char* str);

/*
* decodes the compressed string back to read its actual character values
*/
char* decode(char* str);

/*
* Returns the rangified character at the index if the index is legit,
* otherwise returns a placeholder to fix the 5 bit buffer
*/
char guardRange(char* str, int i);

/*
* Returns the characters encoding value
*/
char range(char c);
