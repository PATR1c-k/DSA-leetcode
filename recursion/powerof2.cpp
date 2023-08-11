#include <iostream>
using namespace std;

#define PI 3.14

int power(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive relation
    return 2 * power(n - 1);
}

int main(int argc, char const *argv[])
{
    int i;
    cout << "Enter a number to find 2^n for : " << endl;
    cin >> i;
    cout << power(i) << endl;
    return 0;
}
