#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s;

    s.insert(3);
    s.insert(6);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(4);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << s.count(1);
    return 0;
}
