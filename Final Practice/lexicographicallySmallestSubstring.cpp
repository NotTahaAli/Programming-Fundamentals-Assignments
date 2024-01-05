#include <iostream>
using namespace std;

const int MAX_STR_SIZE = 1000;

char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 'a' - 'A';
    return c;
}

// 1 - A is Lower
// 0 - A and B are Equal
// -1 - B is Lower
int cmp(char a, char b)
{
    a = toLower(a);
    b = toLower(b);
    if (a > b)
        return -1;
    if (a == b)
        return 0;
    return 1;
}

bool isStringALower(char a[], char b[]) {
    int i;
    for (i = 0; a[i] != 0 && b[i] != 0; i++) {
        if (a[i] > b[i]) return false;
        if (b[i] > a[i]) return true;
    }
    return (a[i] == 0);
}

bool getDistinctSubstring(char str[], char sub[], int index, int minDistinct)
{
    int count = 0;
    int size = 0;
    bool found;
    for (int i = index; str[i] != 0; i++)
    {
        found = false;
        for (int j = index; j < i; j++)
        {
            if (cmp(str[i],str[j]) == 0)
            {
                found = true;
                break;
            }
        }
        sub[size] = str[i];
        size++;
        if (!found)
        {
            count++;
            if (count == minDistinct)
            {
                sub[size] = 0;
                return true;
            };
        }
    }
    return false;
}

void clone(char src[], char dest[])
{
    int i = 0;
    for (i = 0; src[i] != 0; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = 0;
}

bool lexicalMinimum(char str[], char out[], int minDistinct)
{
    bool minFound = false;
    char substr[MAX_STR_SIZE];
    for (int i = 0; str[i] != 0 && getDistinctSubstring(str, substr, i, minDistinct); i++)
    {
        if (!minFound || isStringALower(substr, out)) {
            clone(substr, out);
            minFound = true;
        }
    }
    return minFound;
}

int main()
{
    char arr[MAX_STR_SIZE] = "";
    char min[MAX_STR_SIZE];

    cout << arr << endl;

    cout << lexicalMinimum(arr, min, 3) << endl;

    cout << min << endl;

    return 0;
}