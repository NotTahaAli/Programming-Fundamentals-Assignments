#include <iostream>
using namespace std;

const int MAX_STR_SIZE = 100;

void replaceWord(char arr[], char sub[], int index, int oldsize, int newsize) {
    if (oldsize <= 0) return;
    if (newsize <= 0) return;
    if (index < 0) return;
    if (oldsize >= newsize) {
        for (int i = 0; sub[i] != 0; i++) {
            arr[index+i] = sub[i];
        }
        for (int i = index+newsize;; i++) {
            arr[i] = arr[i-newsize+oldsize];
            if (arr[i] == '\0') break;
        }
    } else {
        char temp;
        int strlen = index;
        for (; arr[strlen] != 0; strlen++);
        for (int i = strlen-oldsize+newsize+1; i >= index+oldsize; i--) {
            arr[i] = arr[i+oldsize-newsize];
        }
        for (int i = 0; sub[i] != 0; i++) {
            arr[index+i] = sub[i];
        }
    }
}

int findSubstring(char arr[], char sub[], int index) {
    if (sub[0] == '\0') return -1;
    int match = 0;
    for (int i = index; arr[i] != 0; i++) {
        if (arr[i] == sub[match]) {
            match++;
        } else {
            match = 0;
        }
        if (sub[match] == '\0') return i - match + 1;
    }
    return -1;
}

int main() {
    char arr[MAX_STR_SIZE] = "Hello. I am Taha. I am Nice. Hello Hello. Tahaa Taha.";
    char find[MAX_STR_SIZE] = "Hello";
    char sub[MAX_STR_SIZE] = "World";
    cout << arr << endl;
    int oldLen = 0;
    for (; find[oldLen] != 0; oldLen++);
    int newLen = 0;
    for (; sub[newLen] != 0; newLen++);
    int pos = -newLen;
    while ((pos = findSubstring(arr, find, pos+newLen)) != -1) {
        replaceWord(arr, sub, pos, oldLen, newLen);
    }
    cout << arr;
    return 0;
}