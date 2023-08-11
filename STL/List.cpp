#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l;

    l.push_front(2);
    l.push_back(1);

    // l.pop_back();
    l.push_back(20);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    // cout << "Print first index in element -> " <<  << endl;

    cout << " front -> " << l.front() << endl;
    cout << " back -> " << l.back() << endl;

    cout << "Is empty -> " << l.empty() << endl;

    return 0;
}
