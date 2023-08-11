#include <iostream>
using namespace std;

int fibonnaci(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }

    if (n == 2 || n == 3)
    {
        return 1;
    }

    // recursive call
    return fibonnaci(n - 1) + fibonnaci(n - 2);
}

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    cout << "number at position";
    cout << fibonnaci(num);
    return 0;
}
