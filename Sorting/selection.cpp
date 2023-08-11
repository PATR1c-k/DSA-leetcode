#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
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
    int arr[] = {213, 23, 700, 435, 35, 646};
    int size = sizeof(arr) / sizeof(int);

    SelectionSort(arr, size);
    printArray(arr, size);
    return 0;
}
