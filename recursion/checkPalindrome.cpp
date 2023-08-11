#include <iostream>
using namespace std;

bool palindrome(string name, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }

    if (name[i] != name[j])
    {
        return false;
    }
    else
    {
        return palindrome(name, i + 1, j - 1);
    }
}

int main(int argc, char const *argv[])
{
    string name;
    cout << "Enter a string to check whether it is palindrome or not!" << endl;
    cin >> name;
    if (palindrome(name, 0, name.size() - 1) == 1)
    {
        cout << "YEs!";
    }
    else
    {
        cout << "No!";
    }

    return 0;
}
