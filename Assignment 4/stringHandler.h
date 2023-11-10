const int MAX_STRING_SIZE = 101;
int strLen(char str[]);
void strConcat(char dest[], char src[]);
void strCopy(char src[], char dest[]);
void strEditPos(char str[], int pos, char character);
void strEditPosArr(char str[], int pos[], char characters[], int size);
void strReplace(char str[], char find, char replace);