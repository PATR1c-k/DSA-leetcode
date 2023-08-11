#include <iostream>
using namespace std;

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return false;
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
