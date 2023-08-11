#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a.at(i);
    }

    cout << "Element at 2nd index = " << a.at(2) << endl;
    cout << "Empty or not = " << a.empty() << endl;

    cout << "The first element -> " << a.front() << endl;
    cout << "The last element -> " << a.back() << endl;
    return 0;
}
