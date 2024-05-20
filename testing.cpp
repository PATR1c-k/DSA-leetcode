#include <iostream>
using namespace std;

int findPivotElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
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
    int arr[] = {7, 9, 10, 11, 13, 1, 2, 3};
    int size = sizeof(arr) / sizeof(int);

    cout << "pivot is at Index:" << findPivotElement(arr, size);

    return 0;
}
