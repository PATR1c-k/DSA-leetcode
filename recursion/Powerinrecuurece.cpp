#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (a == 0)
    {
        return 0;
    }
    if (b == 0)
    {
        return 1;
    }

    // recurrence relation
    return a * power(a, b - 1);
}

int main(int argc, char const *argv[])
{
    int a, b;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a POwer to be calucalte:";
    cin >> b;
    cout << power(a, b) << endl;
    return 0;
}
