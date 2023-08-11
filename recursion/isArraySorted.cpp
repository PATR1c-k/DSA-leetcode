#include <iostream>
using namespace std;

bool sortedOrNot(int arr[], int size)
{
    // basse case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = sortedOrNot(arr + 1, size - 1);
        return remainingPart;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 6, 19, 100, 120};
    int size = sizeof(arr) / sizeof(int);
    if (sortedOrNot(arr, size))
    {
        cout << "Array is Sorrted." << endl;
    }
    else
    {
        cout << "array is not sorted." << endl;
    }

    return 0;
}
