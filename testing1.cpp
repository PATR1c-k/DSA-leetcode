#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int i = 0;
    int j = n - 1;
    int mid = (i + j) / 2;

    while (i <= j)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }

        mid = (i + j) / 2;
    }
    return -1;
}

int pivotInArray(int arr[], int n)
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
    return e;
}

int main(int argc, char const *argv[])
{
    int target;
    int arr[] = {542, 2321, 31234, 50000, 2, 5, 70, 243};
    // cout << binarySearch(arr, sizeof(arr) / sizeof(int), 2321) << endl;
    // cout << "Enter a number you wanna find out -> " << endl;
    // cin >> target;
    // cout << "Number is at index position : " << binarySearch(arr, sizeof(arr) / sizeof(int), target);

    cout << "Pivot in Array is at Index : " << pivotInArray(arr, sizeof(arr) / sizeof(int));

    return 0;
}
