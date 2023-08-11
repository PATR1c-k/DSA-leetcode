#include <iostream>
#include <stack>
using namespace std;

bool matches(char top, char curr)
{
    if (top == '(' && curr == ')' || top == '{' && curr == '}' && top == '[' && curr == ']')
    {
        return true;
    }
    return false;
}

bool validParenthesis(string expresssion)
{
    stack<char> st;

    for (int i = 0; i < expresssion.length(); i++)
    {
        char ch = expresssion[i];

        // bracket is openning
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            // breacket is closing
            char top = st.top();
            if (!st.empty())
            {
                // not empty
                if (matches(top, ch))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    // final stack update
    if (st.empty())
    {
        return true;
    }

    return false;
}

int main(int argc, char const *argv[])
{
    string expression;
    cout << "Enter a expressio to perform operation:";
    cin >> expression;

    if (validParenthesis(expression))
    {
        cout << "valid parenthesis" << endl;
    }
    else
    {
        cout << "Invalid Parenthesis" << endl;
    }

    return 0;
}
