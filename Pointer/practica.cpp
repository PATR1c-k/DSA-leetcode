#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // making a dynamic array
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getSum(arr, n) << endl;

    // prank while
    while (true)
    {
        int *ptr = new int[3];
    }

    return 0;
}
