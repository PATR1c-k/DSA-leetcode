#include <iostream>
using namespace std;

bool bsearch(int arr[], int start, int end, int target)
{
    // base case

    // element not found
    if (start > end)
    {
        return false;
    }

    int mid = (start) + (end - start) / 2;

    // element found
    if (arr[mid] == target)
    {
        return true;
    }

    if (arr[mid] < target)
    {
        bsearch(arr, mid + 1, end, target);
    }
    else
    {
        bsearch(arr, start, mid - 1, target);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 6, 10, 14, 30, 50, 444};
    int size = sizeof(arr) / sizeof(int);
    int target;
    cout << "Enter a number to be found in an array" << endl;
    cin >> target;

    cout << bsearch(arr, 0, size - 1, target);
    return 0;
}
