#include <iostream>
using namespace std;

int factorial(int x)
{
    // base case
    if (x == 0 || x == 1)
    {
        return 1;
    }

    if (x == 2)
    {
        return 2;
    }

    return factorial(x) * factorial(x - 1);
}

int main()
{
    // Write your code here
    int input;
    cin >> input;
    cout << factorial(input) << endl;
    return 0;
}