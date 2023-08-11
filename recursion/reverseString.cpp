#include <iostream>
using namespace std;

void reverseString(string &name, int i, int j)
{
    // base caes
    if (i > j)
    {
        return;
    }

    swap(name[i], name[j]);
    i++;
    j--;

    // recurion
    reverseString(name, i, j);
}

int main(int argc, char const *argv[])
{
    string name = "abcde";
    reverseString(name, 0, name.length() - 1);

    cout << name << endl;
    reverseString(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;
}
