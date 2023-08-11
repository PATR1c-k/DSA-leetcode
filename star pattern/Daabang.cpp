#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int row = 1;
    cout << endl;
    while (row <= n)
    {
        // Printing 1st triangle
        int j = 1;
        while (j <= (n - row) + 1)
        {
            cout << j;
            j++;
        }

        // Printing 1st triangle
        int start = (row - 1);
        while (start)
        {
            cout << "*";
            start--;
        }

        // Printing 1st triangle
        int start2 = (row - 1);
        while (start2)
        {
            cout << "*";
            start2--;
        }

        // Printing 1st triangle
        int start3 = n - row + 1;
        while (start3)
        {
            cout << start3;
            start3--;
        }

        cout << endl;
        row++;
    }

    return 0;
}
