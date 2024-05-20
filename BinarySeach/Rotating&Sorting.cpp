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

// method 2nd
// int search(int *arr, int n, int key)
// {
//     int left = 0;
//     int right = n - 1;

//     while (left <= right)
//     {
//         int mid = (left + right) / 2;

//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         // left
//         if (arr[left] <= arr[mid])
//         {
//             if (arr[left] <= key && key <= arr[mid])
//             {
//                 right = mid - 1;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//         }

//         // right
//         else
//         {
//             if (arr[mid] <= key && key <= arr[right])
//             {
//                 left = mid + 1;
//             }
//             else
//             {
//                 right = mid - 1;
//             }
//         }
//     }
//     return -1;
// }
