#include <iostream>
using namespace std;

const int MAX_STR_SIZE = 1000;

char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 'a' - 'A';
    return c;
}

// 1 - String A is Lower
// 0 - String A and B are Equal
// -1 - String B is Lower
int IsStringALowerOrEqual(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != 0 && b[i] != 0; i++)
    {
        if (toLower(a[i]) > toLower(b[i]))
            return -1;
        if (toLower(a[i]) < toLower(b[i]))
            return 1;
    }
    if (a[i] == 0)
        if (b[i] == 0)
            return 0;
        else
            return 1;
    return -1;
}

void clone(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != 0; i++)
    {
        b[i] = a[i];
    }
    b[i] = 0;
}

void rotate(char str[]) {
    char first = str[0];
    int len = 1;
    while (str[len] != '\0') {
        str[len-1] = str[len];
        len++;
    }
    str[len-1] = first;
}

void lexicalMinimum(char arr[], char out[])
{
    clone(arr, out);
    char curr[MAX_STR_SIZE];
    clone(arr, curr);
    do
    {
        rotate(curr);
        if (IsStringALowerOrEqual(curr, out) == 1) {
            clone(curr, out);
        }
    } while (IsStringALowerOrEqual(curr, arr) != 0);
}

int main()
{
    char arr[MAX_STR_SIZE] = "BCABDADAB";
    char out[MAX_STR_SIZE];

    cout << arr << endl;

    lexicalMinimum(arr, out);

    cout << out << endl;

    return 0;
}