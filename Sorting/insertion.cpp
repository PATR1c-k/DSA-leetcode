#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int size = sizeof(arr) / sizeof(int);

    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}
