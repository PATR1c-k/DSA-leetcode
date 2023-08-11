#include <iostream>
using namespace std;

char toLowercase(char ch)
{
    if (ch >= 48 && ch <= 57)
    {
        return ch;
    }

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

bool checkPalindrome(string s)
{
    // Write your code here.

    int start = 0;
    int e = s.length() - 1;

    while (start <= e)
    {
        if (toLowercase(s.at(start) != toLowercase(s.at(e))))
        {
            return false;
        }
        if (toLowercase(s.at(start)) <= 97 || toLowercase(s.at(start)) >= 122)
        {
            start++;
            break;
        }
        else if (toLowercase(s.at(e)) <= 97 || toLowercase(s.at(e)) >= 122)
        {
            e--;
            break;
        }
        start++;
        e--;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string str = "abababa";
    // cout << checkPalindrome(str) << endl;
    cout << toLowercase('S') << endl;
    cout << toLowercase('x') << endl;
    cout << toLowercase('A') << endl;
    cout << toLowercase('Q') << endl;

    cout << toLowercase('4') << endl;
    cout << checkPalindrome("4") << endl;
    return 0;
}
