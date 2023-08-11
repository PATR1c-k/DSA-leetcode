#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "Pratik";
    stack<char> st;

    // pushed in stack
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        st.push(ch);
    };

    string ans = "";

    while (!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout << ans << endl;

    return 0;
}
