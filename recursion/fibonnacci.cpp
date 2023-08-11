#include <iostream>
using namespace std;

int fibonnacci(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    return fibonnacci(n - 1) + fibonnacci(n - 2);
}

int main(int argc, char const *argv[])
{
    int i;
    cin >> i;

    cout << i << "th Position of term is : " << fibonnacci(i) << endl;
    return 0;
}
