#include <iostream>
using namespace std;

const int MAX_STR_SIZE = 100;

void removeWord(char arr[], int index, int size);
void removeDuplicates(char arr[]);
int findSubstring(char arr[], char sub[], int index);

void removeWord(char arr[], int index, int size) {
    if (size <= 0) return;
    if (index <= 0) return;
    if (arr[index+size] == ' ' || arr[index+size] == '.' || arr[index+size] == ',') size++;
    if (arr[index+size-1] != ' ' && arr[index+size] == ' ') size++;
    for (int i = index;; i++) {
        arr[i] = arr[i+size];
        if (arr[i] == '\0') break;
    }
}

void removeDuplicates(char arr[]) {
    char subStr[MAX_STR_SIZE] = "";
    int j = 0;
    int pos;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == ' ' || ((arr[i] == '.' || arr[i] == ',') && (arr[i+1] == '\0' || arr[i+1] == ' '))) {
            subStr[j] = '\0';
            while ((pos = findSubstring(arr, subStr, i+1)) != -1) {
                removeWord(arr, pos, j);
            }
            j = 0;
        } else {
            subStr[j] = arr[i];
            j++;
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
        if (sub[match] == '\0') {
            if (arr[i+1] == 0 || arr[i+1] == ' ' || ((arr[i+1] == '.' || arr[i+1] == ',') && (arr[i+2] == '\0' || arr[i+2] == ' '))) return i - match + 1;
            match = 0;
        }
    }
    return -1;
}

int main() {
    char arr[MAX_STR_SIZE] = "Hello. I am Taha. I am Nice. Hello Hello. Tahaa Taha.";
    cout << arr << endl;
    removeDuplicates(arr);
    cout << arr << endl;
    return 0;
}