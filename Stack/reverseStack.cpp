#include <iostream>
#include <stack>
using namespace std;

void insertAtEnd(stack<int> &st, int element)
{
    // base case
    if (st.empty())
    {
        st.push(element);
        return;
    }

    int num = st.top();
    st.pop();

    // recurssive call
    insertAtEnd(st, element);
    st.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recurrsive call
    reverseStack(stack);

    insertAtEnd(stack, num);
}

int main(int argc, char const *argv[])
{
    stack<int> nums;

    nums.push(1);
    nums.push(2);
    nums.push(3);
    nums.push(4);
    nums.push(5);

    reverseStack(nums);

    cout << nums.top() << endl;
    nums.pop();
    cout << nums.top() << endl;
    nums.pop();
    cout << nums.top() << endl;
    nums.pop();
    cout << nums.top() << endl;
    nums.pop();
    cout << nums.top() << endl;
    nums.pop();

    return 0;
}
