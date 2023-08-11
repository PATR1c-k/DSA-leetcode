#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // placing pivot at correct position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right part to be managed
    int i = s;
    int j = e;

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

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base condition
    if (s >= e)
    {
        return;
    }

    // make partitioning 
    int p = partition(arr, s, e);

    // sorting left part
    quickSort(arr, s, p - 1);

    // sorting right part
    quickSort(arr, p + 1, e);
}

int main(int argc, char const *argv[])
{
    int number[] = {2, 34, 54, 1, 4, 32, 60};
    int size = sizeof(number) / sizeof(int);

    quickSort(number, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl;

    return 0;
}
