#include <iostream>
using namespace std;

void sayDigit(int i)
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (i <= 0)
    {
        return;
    }

    // Processing
    int digit = i % 10;
    i = i / 10;

    sayDigit(i);
    cout << arr[digit] << endl;
}

int main(int argc, char const *argv[])
{
    int i;
    cin >> i;
    cout << endl;
    sayDigit(i);
    cout << endl;
    return 0;
}
