#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    else if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter a value for a,b" << endl;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}
