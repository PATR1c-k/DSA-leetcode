#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // making 2 arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // copying values in both arrays
    int mainArrayIndex = 0;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = 0;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex] = second[index2];
    }
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // first half
    mergeSort(arr, s, mid);

    // second half
    mergeSort(arr, mid + 1, e);

    // merge array
    merge(arr, s, e);
}

int main(int argc, char const *argv[])
{
    int arr[] = {213, 23, 700, 435, 35, 646};
    int size = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
