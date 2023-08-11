#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;

    cout << "Capacity->" << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(4);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(5);
    cout << "Capacity->" << v.capacity() << endl;

    cout << v.size() << endl;
    cout << "Value at index 2 is " << v.at(2) << endl;
    cout << "Value at first is " << v.front() << endl;
    cout << "Value at last is " << v.back() << endl;

    cout << "BEfore pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "size Before clear " << v.size() << endl;
    cout << " Capacity before Clear" << v.capacity() << endl;
    v.clear();
    cout << "size After clear " << v.size() << endl;

    cout << " Capacity after Clear" << v.capacity() << endl;
    // size -> 0;
    // not capacity -> 0

    vector<int> a(5, 1);
    for (int i : a)
    {
        cout << i << " ";
    }

    // copying in another vector
    cout << endl;
    vector<int> last(a);
    for (int i : last)
    {
        cout << i << "  ";
    }

    return 0;
}
