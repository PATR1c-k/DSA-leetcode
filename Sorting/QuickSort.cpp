#include <iostream>
using namespace std;

void printA(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int s, int e)
{
    // set pivot
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // seting pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // handeling left and right for <pivot and right for >pivot condition
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (arr[i] > pivot && arr[j] < pivot)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void QuickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);
    QuickSort(arr, s, p - 1);
    QuickSort(arr, p + 1, e);
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 1, 4, 5, 2, 51, 32};
    int size = sizeof(arr) / sizeof(int);
    printA(arr, size);
    QuickSort(arr, 0, size - 1);
    printA(arr, size);
    return 0;
}
