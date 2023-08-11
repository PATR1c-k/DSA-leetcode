#include<iostream>
#include<stack>

using namespace std;

int validChangesCount(string s)
{
    // if string is odd (()));
    if (string.length()%2 == 1) 
    {
        return -1;
    }

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch=='(')
        {
            st.push(ch);
        }
        else
        {
            // ) bracket or 
        }
        
    }
    
    
}

int main(int argc, char const *argv[])
{
    string operation;
    cout << "Enter a Operation Expression:";
    cin >> operation;

    cout << validChangesCount(operation);

    return 0;
}
