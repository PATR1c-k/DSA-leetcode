#include <iostream>
using namespace std;

long long int SqrtInt(int n)
{
    int s = 0;
    int e = n;

    long long int mid = s + (e - s) / 2;

    int ans = -1;
    while (s <= e)
    {
        long long int sqaure = mid * mid;

        if (sqaure == n)
        {
            return mid;
        }

        if (sqaure < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int tempSol = SqrtInt(n);
    cout << "Answer is :" << morePrecision(n, 8, tempSol) << endl;
    return 0;
}
