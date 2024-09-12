#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int **arr = new int *[n];

    // 2nd part of array creation;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    // Array creation
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    // deleting heaped memeory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    // row and col are diffrent
    // int row;
    // cout << "Enter row size:";
    // cin >> row;
    // int **arr_2d = new int *[row];

    // int col;
    // cout << "Enter col size:";
    // cin >> col;

    // for (int i = 0; i < col; i++)
    // {
    //     arr_2d[i] = new int[col];
    // }

    // // creation
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr_2d[i][j];
    //     }
    // }

    // cout << "Printitng" << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr_2d[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
