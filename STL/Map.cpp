#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> m;

    m[1] = "Pratik";
    m[2] = "Mohit";
    m[3] = "Rupali";
    m[4] = "Vilas";

    m.insert({6, "Arun"});
    cout << "Before erase : ";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "Finding 3->" << m.count(3) << endl;
    cout << "Finding 6->" << m.count(5) << endl; 

    m.erase(3);
    cout << "After Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
