#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    vector<int> v;

    v.push_back(321);
    v.push_back(42);
    v.push_back(54);
    v.push_back(13);
    v.push_back(5);
    v.push_back(12);

    vector<int> ans = reverse(v);
    printVector(ans);
    return 0;
}
