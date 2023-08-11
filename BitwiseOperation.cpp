#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 6;

    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a^b " << (a ^ b) << endl;

    // left shift
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    // right shift
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;

    return 0;
}
