#include <iostream>
using namespace std;

const int MAX_ARR_SIZE = 100;

void clone(const int src[], int dest[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
}

int lengthOfLIS(int nums[], int indices[], int size, int index, int prev)
{
    if (size == index)
        return 0;
    int maxLen = 0;
    int curLen = 0;
    int temp[MAX_ARR_SIZE];
    clone(indices, temp, MAX_ARR_SIZE);
    for (int i = index; i < size; i++)
    {
        if (nums[i] > prev)
        {
            int j;
            for (j = 0; j < MAX_ARR_SIZE; j++)
            {
                if (temp[j] == -1)
                {
                    temp[j] = i;
                    temp[j + 1] = -1;
                    break;
                }
            }
            curLen = lengthOfLIS(nums, temp, size, i + 1, nums[i]) + 1;
            if (curLen > maxLen)
            {
                clone(temp, indices, MAX_ARR_SIZE);
                maxLen = curLen;
            }
            temp[j] = -1;
        }
    }
    return maxLen;
}
int lengthOfLIS(int nums[], int size, int indices[])
{
    int maxLen = 0;
    int curLen = 0;
    int temp[MAX_ARR_SIZE];
    clone(indices, temp, MAX_ARR_SIZE);
    for (int i = 0; i < size; i++)
    {
        temp[0] = i;
        temp[1] = -1;
        curLen = lengthOfLIS(nums, temp, size, i + 1, nums[i]) + 1;
        if (curLen > maxLen)
        {
            clone(temp, indices, MAX_ARR_SIZE);
            maxLen = curLen;
        }
    }
    return maxLen;
}

int main()
{
    int arr[] = {10, 9, 2, 5, 3, 7, 101, 18};
    int indices[MAX_ARR_SIZE] = {-1};

    int len = lengthOfLIS(arr, sizeof(arr) / sizeof(int), indices);
    cout << "Longest Length: " << len << endl;
    cout << "Longest Subsequence: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[indices[i]] << " ";
    }
    cout << endl;
    return 0;
}