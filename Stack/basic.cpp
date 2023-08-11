#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;
    // pushing in stack
    s.push(2);
    s.push(3);
    s.push(4);

    // popping
    cout << "Top element -> " << s.top() << endl;

    s.pop();
    cout << "Top element -> " << s.top() << endl;

    cout << s.size() << endl;

    // is stack empty;
    cout << s.empty() << endl;

    return 0;
}
