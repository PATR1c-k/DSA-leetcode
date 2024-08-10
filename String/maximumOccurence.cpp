#include <iostream>
#include <map>
using namespace std;

char getMaxOccurence(string s)
{
    int arr[26] = {};

    // creating array with number of occurenece
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;

        if (s[i] == ' ')
        {
            i++;
        }

        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    // finding max occurence
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a' + ans;
    return finalans;
}

int main(int argc, char const *argv[])
{
    cout << "Pratik kaple" << endl;
    cout << getMaxOccurence("ewwwewewew pratik kaple") << endl;
    return 0;
}
