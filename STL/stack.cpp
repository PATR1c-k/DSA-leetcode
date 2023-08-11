#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<string> s;

    s.push("Pratik");
    s.push("Vilas");
    s.push("Kaple");

    cout << "Top element->" << s.top() << endl;

    s.pop();
    cout << "Top element->" << s.top() << endl;
    cout << "Size of stack->" << s.size() << endl;

    cout << "Empty or not : " << s.empty() << endl;
    return 0;
}
