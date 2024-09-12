#include <iostream>
using namespace std;

void reverse(string &str, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    swap(str[s], str[e]);
    s++;
    e--;
    reverse(str, s, e);
}

bool checkpalindrome(string str, int s, int e)
{
    // base case
    if (s > e)
    {
        return true;
    }
    if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        return checkpalindrome(str, s + 1, e - 1);
    }
}

long long int powerfunc(int a, int b)
{
    // base case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    if (b % 2 == 0) // even
    {
        int ans = powerfunc(a, b / 2) * powerfunc(a, b / 2);
        return ans;
    }

    // odd
    int ans = powerfunc(a, b / 2) * powerfunc(a, b / 2) * a;
    return ans;
}

void bubblesort(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    bubblesort(arr, n - 1);
}

void printA(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    // dynamic allocation
    int length1 = mid - s + 1;
    int length2 = e - mid;
    int *first = new int[length1];
    int *second = new int[length2];

    // copy values
    int k = s; // mainindex
    for (int i = 0; i < length1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < length2; i++)
    {
        second[i] = arr[k++];
    }

    // merge 2 sorted arrays;
    int index1 = 0;
    int index2 = 0;
    k = s; // mainIndex

    while (index1 < length1 && index2 < length2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < length1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < length2)
    {
        arr[k++] = second[index2++];
    }
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);     // left
    mergeSort(arr, mid + 1, e); // right
    merge(arr, s, e);           // dynamically making 2 arrays and then copying values with new array formation.
}

int main(int argc, char const *argv[])
{
    string s = "kaappaak";
    int size = s.length();
    cout << "Before swap -> " << s << endl;
    reverse(s, 0, size - 1);
    cout << "After swap ->" << s << endl;

    // palindrome
    cout << checkpalindrome(s, 0, size - 1) << endl;

    // powerfunction
    int a = 3, b = 11;
    cout << "Power -> " << powerfunc(a, b) << endl;

    // sorting reccursion
    cout << "Sorting -> " << endl;
    int arr[6] = {10, 1, 7, 4, 8, 2};
    // printA(arr, 6);
    // bubblesort(arr, 6);
    // printA(arr, 6);

    // merge sort
    cout << "before -> " << endl;
    printA(arr, 6);
    mergeSort(arr, 0, 5);
    printA(arr, 6);

    return 0;
}
