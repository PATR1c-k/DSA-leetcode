#include <iostream>
using namespace std;

int getSum(int *arr, int n)
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
    // int a = 20;
    // int *ptr = &a;

    // cout << ptr << endl;  // address of a
    // cout << &a << endl;   // address of a
    // cout << *ptr << endl; // a
    // cout << &ptr << endl;

    // // works diffrently for charachter array;
    // char ch[] = "abcde";
    // cout << ch << endl;
    // cout << ch + 1 << endl;
    // cout << *ch << endl;
    // cout << char(*(ch) + 1) << endl;

    // int first = 8;
    // int second = 18;
    // int *ptr = &second;

    // *ptr = 9;
    // cout << first << " " << second << endl;

    // int n;
    // cin >> n;
    // int *arr = new int[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "Sum is " << getSum(arr, n);
    // delete[] arr;

    int row;
    cout << "Enter row size:";
    cin >> row;
    int **arr_2d = new int *[row];

    int col;
    cout << "Enter col size:";
    cin >> col;

    for (int i = 0; i < col; i++)
    {
        arr_2d[i] = new int[col];
    }

    // creation
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr_2d[i][j];
        }
    }

    cout << "Printitng" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr_2d[i][j] << " ";
        }
        cout << endl;
    }

    // delete
    for (int i = 0; i < row; i++)
    {
        delete[] arr_2d[i];
    }

    delete[] arr_2d;
    cout << "Code execution completed memory released successfully" << endl;
    return 0;
}
