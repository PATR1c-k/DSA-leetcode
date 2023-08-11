#include <iostream>
using namespace std;

int pivot(int arr[], int size)
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

int Bsearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int BsearchOnRotatedAndSortedArray(int arr[], int size, int key)
{
    int pivot = pivot(arr, size);

    if (key >= arr[pivot])
    {
        BsearchOnRotatedAndSortedArray()
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {7, 9, 1, 2, 3};
    int size = sizeof(arr) / sizeof(int);

    return 0;
}
