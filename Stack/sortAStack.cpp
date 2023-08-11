#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &stack, int element)
{
    // base
    if (stack.empty() || (!stack.empty() && stack.top() < element))
    {
        stack.push(element);
        return;
    }

    int n = stack.top();
    stack.pop();

    // recursive call
    sortedInsert(stack, element);
    stack.push(n);
}

void sortedStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recuursive call
    sortedStack(stack);

    sortedInsert(stack, num);
}

int main(int argc, char const *argv[])
{
    stack<int> stack;
    stack.push(34);
    stack.push(-2);
    stack.push(-7);
    stack.push(10);
    stack.push(12);

    sortedStack(stack);

    cout << stack.top() << endl;
    stack.pop();
    cout << stack.top() << endl;
    stack.pop();
    cout << stack.top() << endl;
    stack.pop();
    cout << stack.top() << endl;
    stack.pop();
    cout << stack.top() << endl;
    stack.pop();

    return 0;
}
