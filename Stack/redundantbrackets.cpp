#include <iostream>
#include <stack>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // ) tag or symbols
            if (ch == ')')
            {
                bool redundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '*' || top == '-' || top == '+' || top == '/')
                    {
                        redundant = false;
                    }
                    st.pop();
                }

                if (redundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    string operation;
    cout << "Enter a Operation Expression:";
    cin >> operation;

    if (findRedundantBrackets(operation))
    {
        cout << "Operation containts redundant brackets!";
    }
    else
    {
        cout << "Operation is clean";
    }

    return 0;
}
