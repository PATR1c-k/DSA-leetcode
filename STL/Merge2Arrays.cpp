#include <iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    // copy First array element
    while (i < m)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Copy second array element
    while (j < n)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

void printA(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {};

    merge(arr1, 5, arr2, 3, arr3);
    printA(arr3, 8);
    return 0;
}
