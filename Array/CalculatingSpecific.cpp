#include <iostream>
using namespace std;

int printSum(int arr[], int n)
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
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "The sum is : " << endl;

    cout << printSum(arr + 3, 3);
    return 0;
}
