#include <iostream>
using namespace std;
string removeoccurencesofsubstring(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s;
    string part;
    getline(cin, s);
    cout << s;

    cout << "Enter a substring" << endl;
    cin >> part;

    cout << "after removing substring occurence : " << removeoccurencesofsubstring(s, part) << endl;
    return 0;
}
