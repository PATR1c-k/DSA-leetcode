#include <iostream>
using namespace std;

void change(int &a)
{
    a = 10;
}

int main(int argc, char const *argv[])
{
    // int value = 5;

    // cout << "The value is : " << value << endl;
    // change(value);
    // cout << "After a change function:" << value << endl;

    char ch = 'p';
    cout << sizeof(ch) << endl;

    char *c = &ch;
    cout << sizeof(c) << endl;
    return 0;
}
