#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // arr[i] += 1;
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool search(int arr[], int n, int data)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            return true;
        }
    }
    return false;
}

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]); // Swap is natively available
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        start++;
        end--;
    }
}

void alternateSwap(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        int start = i;
        int next = start + 1;
        swap(arr[start], arr[next]);
    }
}

int main(int argc, char const *argv[])
{
    int num[] = {1, 43, 23, 546, 74, 432};
    int size = sizeof(num) / sizeof(int);

    // cout << "Data is at index location: " << search(num, size, 23) << endl;

    // reverse(num, size);
    alternateSwap(num, size);
    printArray(num, size);

    return 0;
}
