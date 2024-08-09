#include <iostream>
#include <vector>
using namespace std;

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

// end;

string reverseWordinstring(string s)
{
    int n = s.size();
    int i = 0;
    string ans = "";

    while (i < n)
    {
        string temp = "";

        // it will ignore spaces
        while (s[i] == ' ' && i < n)
        {
            i++;
        }

        // it will add whole word
        while (s[i] != ' ' && i < n)
        {
            temp += s[i];
            i++;
        }

        if (temp.size() > 0)
        {
            if (ans.size() == 0)
            {
                ans = temp;
            }
            else
            {
                ans = temp + " " + ans;
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // cout << isPalindrome("Pratik");
    // cout << isPalindrome("Malayalam");
    // cout << isPalindrome("Boob");
    // cout << isPalindrome("0P");
    // cout << isPalindrome("oP");

    // cout << reverseWordinstring("Pratik kaple");
    // cout << " Pratik";

    cout << maximumOuccuringchinstring("Pratik kaple");

    return 0;
}
