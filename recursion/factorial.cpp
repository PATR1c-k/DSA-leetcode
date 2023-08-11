#include <iostream>
using namespace std;

#define PI 3.14

int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }

    cout << a << endl;

    return a * factorial(a - 1);
}

int main(int argc, char const *argv[])
{

    int i;
    cout << "Enter a number to find its factorial:";
    cin >> i;
    cout << factorial(i) << endl;
    return 0;
}
