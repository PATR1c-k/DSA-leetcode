#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int element)
{
    // base case
    if (st.empty())
    {
        st.push(element);
        return;
    }

    int num = st.top();
    st.pop();

    solve(st, element);
    st.push(num);
}

stack<int> insertAtBottom(stack<int> &st, int element)
{
    solve(st, element);
    return st;
}

int main(int argc, char const *argv[])
{
    stack<int> st;

    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);

    stack<int> newStack = insertAtBottom(st, 9);

    // print all stack top to bottom
    while (!newStack.empty())
    {
        cout << newStack.top() << " ";
        newStack.pop();
    }

    return 0;
}
