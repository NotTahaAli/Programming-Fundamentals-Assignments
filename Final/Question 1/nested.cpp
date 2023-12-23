#include<iostream>
using namespace std;

// I did this in the exam as we were not allowed to use vectors or external libraries. (Code was originally written on paper)

int longestSubArray(int nums[], int size) {
    int i = 0;
    int next = size;
    int count = 0;
    int maxcount = 0;
    bool ignore = false;
    while (i < size) {
        count = 0;
        ignore = false;
        for (int j = i; j < size; j++) {
            if (nums[j] == 0) {
                if (ignore) break;
                else {
                    ignore = true;
                    next = j+1;
                }
            } else {
                count++;
            }
        }
        if (!ignore) {
            count--;
            next = size;
        };
        if (count > maxcount) maxcount = count;
        i = next;
    }
    return maxcount;
}

int main() {
    int arr[] = {0,0,1,1,1,0,1,1};
    int size = sizeof(arr) / sizeof(int);
    cout << longestSubArray(arr, size);
    return 0;
}