#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int powerof2(int n)
{
    // base case
    if (n == 1)
    {
        return 2;
    }
    return 2 * powerof2(n - 1);
}

int fibonnaci_series(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }

    if (n == 2 || n == 3)
    {
        return 1;
    }

    return fibonnaci_series(n - 1) + fibonnaci_series(n - 2);
}

void sayDigit(int n)
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;
    sayDigit(n);

    cout << arr[digit] << " ";
}

bool isSorted(int arr[], int size)
{
    // base case
    if (size == 0, size == 1)
    {
        return 1;
    }

    if (arr[0] > arr[1])
    {
        return 0;
    }
    else
    {
        bool remaining_part = isSorted(arr + 1, size - 1);
        return remaining_part;
    }
}

int sumup(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    int sum = arr[0] + sumup(arr + 1, size - 1);
    return sum;
}

bool linearSearch(int arr[], int size, int target)
{
    // base case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == target)
    {
        return true;
    }

    return linearSearch(arr + 1, size - 1, target);
}

bool binarySearch(int arr[], int s, int e, int target)
{
    // base case
    // element not found
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    // element found
    if (arr[mid] == target)
    {
        return true;
    }

    if (arr[mid] > target)
    {
        return binarySearch(arr, s, mid - 1, target);
    }
    else
    {
        return binarySearch(arr, mid + 1, e, target);
    }
}

int main(int argc, char const *argv[])
{
    // int input;
    // cout << "Enter a number:" << endl;
    // cin >> input;

    // cout << "Factorial of " << input << " is " << factorial(input) << endl;
    // cout << input << " Power of 2 is:" << powerof2(input) << endl;
    // cout << "Term at " << input << " in fibonnaci seires is:" << fibonnaci_series(input);
    sayDigit(423);
    cout << endl;

    int arr[] = {2, 4, 6, 9, 11, 13};
    int arr1[] = {2, 40, 86, 9, 11, 13};
    // cout << isSorted(arr, 6) << endl;
    // cout << isSorted(arr1, 6) << endl;

    // // sumup
    // cout << "Total sum is:" << sumup(arr, 6) << endl;

    // cout << "Linear search results:" << endl;
    // cout << linearSearch(arr, 6, 10) << endl;
    // cout << linearSearch(arr, 6, 13) << endl;

    // Binary serach
    cout << "Binarysearch results" << endl;
    cout << binarySearch(arr, 0, 5, 13) << endl;
    cout << binarySearch(arr, 0, 5, 10) << endl;

    return 0;
}
