#include <iostream>
using namespace std;

class stack
{

public:
    int top; // indicate index
    int size;
    int *arr;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        this->top = -1;
    };

    void push(int element)
    {
        // check is full
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow!" << endl;
        }
    };

    void pop()
    {
        // check is empty
        if (top >= 0)
        {
            int popped = arr[top];
            top--;
            cout << "Pooped element is : " << popped << endl;
        }
        else
        {
            cout << "Stack is underflowed!" << endl;
        }
    };

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    };

    void peek()
    {
        cout << "Top element is:" << arr[top] << endl;
    };
};

int main(int argc, char const *argv[])
{
    stack st(3);

    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty!" << endl;
    }

    st.push(1);
    st.peek();

    st.push(2);
    st.peek();

    st.push(3);
    st.peek();

    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty!" << endl;
    }

    st.pop();
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();

    st.pop();

    return 0;
}
