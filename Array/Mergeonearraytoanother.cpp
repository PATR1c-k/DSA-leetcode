#include <iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n)
{
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr1[i] == 0)
        {
            arr1[i] = arr2[j];
            j++;
        }
    }
}

void PrintA(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr1[5] = {1, 2, 3, 0, 0};
    int arr2[2] = {7, 8};

    merge(arr1, 5, arr2, 2);
    PrintA(arr1, 5);
    return 0;
}
