#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 5;
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;

    cout << j << endl;
    i--;
    cout << j << endl;
    return 0;
}
