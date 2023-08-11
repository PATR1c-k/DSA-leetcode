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

int sum(int arr[], int size)
{

    // base case
    if (size < 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    int remainingPart = sum(arr + 1, size - 1);
    int finalSum = arr[0] + remainingPart;
    return finalSum;
}

bool checkPresence(int arr[], int size, int target)
{
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == target)
    {
        return true;
    }

    bool forRemaining = checkPresence(arr + 1, size - 1, target);
    return forRemaining;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 54, 42, 42};
    int size = sizeof(arr) / sizeof(int);
    int target;
    cout << "Enter a number that to be foun in Array : " << endl;
    cin >> target;

    cout << checkPresence(arr, size, target) << endl;
    return 0;
}
