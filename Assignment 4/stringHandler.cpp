#include <iostream>
using namespace std;
const int MAX_STRING_SIZE = 101;

int strLen(char str[]) {
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}

void strConcat(char dest[], char src[]) {
    int len = strLen(dest);
    if (len + strLen(src) >= MAX_STRING_SIZE-1) {
        cout << "Size of Concatenation exceeds maximum size (" << MAX_STRING_SIZE-1 << "), Operation skipped.";
        return;
    }
    int i;
    for (i=0; src[i] != '\0';i++) dest[len+i] = src[i];
    dest[len+i] = '\0';
}

void strCopy(char src[], char dest[]) {
    int i;
    for (i=0; src[i] != '\0';i++) dest[i] = src[i];
    dest[i] = '\0';
}

void strEditPos(char str[], int pos, char character) {
    if (pos >= MAX_STRING_SIZE - 1) {
        cout << "Position given " << pos << " But Maximum allowed Position is " << MAX_STRING_SIZE - 2 << ". Not editing at this position.";
        return;
    }
    str[pos] = character;
}

void strEditPosArr(char str[], int pos[], char characters[], int size) {
    for (int i = 0; i < size; i++) strEditPos(str, pos[i], characters[i]);
}

void strReplace(char str[], char find, char replace) {
    for (int i=0; str[i] != '\0';i++) if (str[i] == find) str[i] = replace;
}