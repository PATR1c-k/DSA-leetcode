#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ans = factorial(n) / (factorial(n - r) * factorial(r));
    return ans;
}

int main()
{
    int n;
    int r;
    cin >> n >> r;
    cout << "nCr is : " << nCr(n, r) << endl;
    return 0;
}
