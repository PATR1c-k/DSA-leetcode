#include <iostream>
using namespace std;

void sortOne(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < size / 2 && j >= size / 2)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {0, 1, 0, 1, 1, 2, 0, 1, 2, 0};

    int size = sizeof(arr) / sizeof(int);

    sortOne(arr, size);

    printArray(arr, size);

    return 0;
}
