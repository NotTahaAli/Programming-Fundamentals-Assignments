#include <iostream>
using namespace std;

const int MAX_STR_SIZE = 1000;

char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 'a' - 'A';
    return c;
}

bool IsStringALowerOrEqual(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != 0 && b[i] != 0; i++)
    {
        if (toLower(a[i]) > toLower(b[i]))
            return false;
        if (toLower(a[i]) < toLower(b[i]))
            return true;
    }
    if (a[i] == 0)
        return true;
    return false;
}

void swap(char a[], char b[])
{
    char temp;
    bool aEnded = false;
    bool bEnded = false;
    for (int i = 0; !aEnded || !bEnded; i++)
    {
        if (a[i] == 0)
            aEnded = true;
        if (b[i] == 0)
            bEnded = true;
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void sort(char arr[][MAX_STR_SIZE], int len)
{
    int j;
    for (int i = 1; i < len; i++)
    {
        j = i;
        while (j > 0 && IsStringALowerOrEqual(arr[j], arr[j - 1]))
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    char arr[][MAX_STR_SIZE] = {
        "Taha",
        "Abdullah",
        "Zuhair",
        "Abdullah Ihtesham",
        "Abdullah Ahmed",
        "Wali",
        "Abdulrehman",
        "Abdulrehman Ch"};
    int len = sizeof(arr) / MAX_STR_SIZE;

    sort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}