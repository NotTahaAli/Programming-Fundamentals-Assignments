#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// I did this afterwards as I wanted to see if I could do it without the need for a nested loop.
// (This code was written on computer and was able to be tested while writing)

int longestSubArray(vector<int> nums) {
    vector<int> sequences;
    int size = nums.size();
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == 0) sequences.push_back(0);
        else {
            count++;
            if(i+1 == size || nums[i+1] == 0) {
                sequences.push_back(count);
                count = 0;   
            }
        }
    }
    size = sequences.size();
    if (size == 1) return sequences[0]-1;
    count = 0;
    for (int i = 1; i < size - 1; i++) {
        if (sequences[i] == 0) {
            count = max(count, sequences[i-1]+sequences[i+1]);    
        }
    }
    return count;
}

int main() {
    cout << longestSubArray({1,0,1,1,1,0,1,1});
    return 0;
}
