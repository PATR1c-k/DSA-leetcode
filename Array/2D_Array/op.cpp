#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][3], int m, int n)
{
    cout << "Print The sum row-wise" << endl;
    for (int row = 0; row < m; row++)
    {
        int sum = 0;
        for (int col = 0; col < n; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[3][3];

    cout << "Enter the elemets" << endl;
    // taking an input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        cout << "row completed" << endl;
    }

    cout << "This is Whole array" << endl;
    // outputing whole array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Element Founding process" << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 3))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Not found error" << endl;
    }

    printSum(arr, 3, 3);

    return 0;
}
