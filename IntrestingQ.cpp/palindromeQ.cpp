#include <iostream>
using namespace std;

char toLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowercase(name[s]) != toLowercase(name[e]))
        {
            return false;
        }
        if (toLowercase(name[s]) <= 97 || toLowercase(name[s]) >= 122)
        {
            s++;
            break;
        }
        else if (toLowercase(name[e]) <= 97 || toLowercase(name[e]) >= 122)
        {
            e--;
            break;
        }
        s++;
        e--;
    }
    return true;
}

int getLength(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}

void reverseArray(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

int main(int argc, char const *argv[])
{
    char name[20];

    cin >> name;
    cout << checkPalindrome(name, getLength(name));
    return 0;
}
