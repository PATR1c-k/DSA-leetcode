#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target)
{

    // int row = sizeof(arr) / sizeof(column);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void row_wise_sum(int arr[][3])
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row " << i << " sum to -> " << sum << endl;
        sum = 0;
    }
}

int max_sum_row(int arr[][3])
{
    int rowIndex = -1;
    int maxSum = 0;
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main(int argc, char const *argv[])
{
    // creating array
    int arr[4][3] = {1, 2, 4, 6, 7, 8, 10, 11, 12, 4, 5, 8};

    cout << "Enter Numbers as per filling row first sequence" << endl;

    // // taking inout
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    //     cout << endl;
    // }

    cout << "Output of whole matrix" << endl;

    // output of whole matrix
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // int target;

    // cout << "Enter number to check:" << endl;
    // cin >> target;

    // if (isPresent(arr, target))
    // {
    //     cout << "Present" << endl;
    // }
    // else
    // {
    //     cout << "Absent" << endl;
    // }

    cout << sizeof(arr) / sizeof(int) << endl;

    // cout << sizeof(arr);

    row_wise_sum(arr);
    cout << "Maximum sum is of row -> " << max_sum_row(arr) << endl;

    return 0;
}
