#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 5, 9, 13, 27};
    int size = sizeof(arr) / sizeof(int);

    int value;
    cin >> value;

    if (BinarySearch(arr, size, value) == -1)
    {

        cout << "Value not found";
    }
    else
    {
        cout << "The value is present at index: " << BinarySearch(arr, size, value);
    }

    return 0;
}
