#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    // BInary search (tells present or not)
    cout << "Present or not" << binary_search(v.begin(), v.end(), 5) << endl;
    
    cout<<lower_bound()
    
    return 0;
}
