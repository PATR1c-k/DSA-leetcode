#include <iostream>
using namespace std;

int Pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 8, 100, 1, 2};
    int size = sizeof(arr) / sizeof(int);

    cout << Pivot(arr, size) << endl;
    return 0;
}
