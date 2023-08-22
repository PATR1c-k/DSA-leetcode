#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int> &arr, int n)
{
    int size = n;

    while (size > 1)
    {
        // step 1
        swap(arr[size], arr[1]);
        size--;

        // step2
        heapify(arr, size, 1);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {-1, 55, 52, 53, 51, 54};

    heapSort(arr, arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
