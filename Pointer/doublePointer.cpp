#include <iostream>
using namespace std;

void ChangeValue(int **p)
{
    **p = 100;
}

int main(int argc, char const *argv[])
{
    // int value = 3;

    // int *ptr = &value;

    // cout << "This is a Address of value:" << ptr << endl;

    // int **ptr2 = &ptr;
    // cout << "This is a Address of ptr:" << ptr2 << endl;

    // cout << *ptr2 << endl;

    // cout << "Value of Value:" << value << endl;
    // ChangeValue(ptr2);
    // cout << "Value of Value:" << value << endl;

    char arr[] = "abccdef";
    char *ptr = arr;

    cout << ptr << endl;

    return 0;
}
