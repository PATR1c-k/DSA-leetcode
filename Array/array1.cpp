#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // arr[i] += 1;
        cout << arr[i] << " ";
    }
    cout << endl;
}

int getMax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int getMin(int array[], int n)
{
    int min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int sumOfAllElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int arr[6] = {1, 2, 3, 34, 54, 100};
    cout << sizeof(arr) << endl;
    int largest = arr[0];
    for (int i = 1; i < sizeof(arr); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest number by brute force method is " << largest;
    return 0;
}
