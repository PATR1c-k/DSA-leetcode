#include <iostream>
using namespace std;

int firstOccurenece(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;

    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = (s + e) / 2;
    }
    return ans;
}

void firstAndLastOccurenece(int arr[], int size, int key)
{
    int first = firstOccurenece(arr, size, key);
    int last = lastOccurence(arr, size, key);
    cout << "First occurence is at :" << first << " \nLast occurence is at:" << last;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 3, 5, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[1]);

    firstAndLastOccurenece(arr, size, 5);
    return 0;
}
