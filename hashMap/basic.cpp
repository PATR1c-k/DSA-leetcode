#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    // creation
    map<string, int> m;

    // insertion method -1
    pair<string, int> p = make_pair("Pratik", 1);
    m.insert(p);

    // insertion method 2
    pair<string, int> pair2("Kaple", 2);
    m.insert(pair2);

    // 3
    m["Pratik"] = 38;

    cout << m.at("Pratik") << endl;
    cout << m["Pratik"] << endl;

    // cout << m.at("unknown") << endl;   //if this entry is not present in m then it will hit an error;

    cout << m["unknown"] << endl; // even here entry was not present but it created a entry.
    cout << m.at("unknown") << endl;

    cout << m.size() << endl; // 3 as there are 3 entries.
    cout << m.count("Unknown") << endl;

    // traversing
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // iterator
    map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    cout << m.size() << endl;
    m.erase("unknown"); // use to remove 
    cout << m.size() << endl;

    return 0;
}
