#include <iostream>
using namespace std;

// O(logn)
int peakInMountain(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    int arr[] = {24, 69, 70, 75, 79, 78, 67, 36, 26, 19};
    int size = sizeof(arr) / sizeof(arr[1]);

    cout << peakInMountain(arr, size);
    return 0;
}
