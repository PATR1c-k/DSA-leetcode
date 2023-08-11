#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    // MAx heap
    priority_queue<int> maxi;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(2);
    maxi.push(1);
    maxi.push(4);
    maxi.push(3);
    cout << "Size -> " << maxi.size() << endl;
    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(3);
    mini.push(1);
    mini.push(4);
    mini.push(2);
    mini.push(5);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    cout << "Are these empty : " << mini.empty() << endl;
    return 0;
}
