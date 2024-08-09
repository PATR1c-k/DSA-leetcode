#include <iostream>
using namespace std;

int getlength(char name[])
{
    int count = 0;
    int i = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (name[s++] != name[e--])
        {
            return false;
        }
    }
    return true;
}

// start
bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char toLowercase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string a)
{
    int s = 0;
    int e = a.length() - 1;

    while (s <= e)
    {
        if (toLowercase(a[s]) != toLowercase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s)
{
    string temp = "";

    // removing faltu char
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // converting in a lowercase
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowercase(temp[i]);
    }

    return checkPalindrome(temp);
}

// end

void print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void rotate(vector<int> &arr, int n, int k)
{
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    arr = temp;
}

int main(int argc, char const *argv[])
{
    char name[20];

    cin >> name;
    cout << "Original String:" << name;

    cout << getlength(name);

    reverseString(name, getlength(name));
    cout << "Reversed string:" << name;

    cout << endl;
    cout << checkPalindrome(name, getlength(name));
    return 0;
}
