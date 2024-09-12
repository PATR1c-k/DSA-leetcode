#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Write your countBits function here

vector<int> countBits(int n)
{
    vector<int> arr;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (n * pow(10, i)) + ans;
        arr.push_back(ans);
        n = n >> 1;
        i++;
    }

    return arr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans = countBits(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}