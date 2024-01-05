#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int lenOfNonRepeatingSubstring(const char arr[])
{
    int maxLen = 0;
    int cur = 0;
    bool found = false;
    for (int i = 0; arr[i] != 0; i++)
    {
        cur = 1;
        for (int j = i + 1; arr[j] != 0; j++)
        {
            found = false;
            for (int k = i; k < j; k++)
            {
                if (arr[j] == arr[k])
                {
                    found = true;
                    break;
                }
            }
            if (found) break;
            cur++;
        }
        maxLen = max(cur, maxLen);
    }
    return maxLen;
}

int main()
{
    cout << lenOfNonRepeatingSubstring("abcabcbb") << endl;
    cout << lenOfNonRepeatingSubstring(" ") << endl;
    cout << lenOfNonRepeatingSubstring("abcdecabf") << endl;
}