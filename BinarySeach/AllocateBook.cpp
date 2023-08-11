
#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int m, int mid)
{
    int student = 1;
    int pagesum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            student++;
            if (student > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int bookAllocation(int arr[], int size, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int e = sum;

    int mid = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {
        if (isPossible(arr, size, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(int);
    cout << bookAllocation(arr, size, 2);
    return 0;
}
