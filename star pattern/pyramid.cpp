#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        // Print karo space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // print 1st karo triangle
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }

        // print 2nd karo triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start -= 1;
        }

        cout << endl;
        row++;
    }

    return 0;
}
