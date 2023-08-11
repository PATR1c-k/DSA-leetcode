// fibbonaachi series
// 0 1 1 2 3 5 8 13 ...

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << endl;
    cout << b << endl;
    for (int i = 1; i <= n; i++)
    {
        int next = a + b;
        cout << next << endl;
        a = b;
        b = next;
    }

    return 0;
}
