#include <iostream>
#include <stack>
using namespace std;

void Solve(stack<int> &inputStack, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // recurssive call
    Solve(inputStack, count + 1, size);
    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int size)
{
    int count = 0;
    Solve(inputStack, count, size);
}

int main(int argc, char const *argv[])
{
    stack<int> st;

    st.push(5);
    st.push(9);
    st.push(12);
    st.push(8);
    st.push(4);

    deleteMiddle(st, 5);

    st.pop();
    st.top();
    st.top();
    st.pop();
    st.top();
    st.top();
    st.pop();
    st.top();

    return 0;
}
