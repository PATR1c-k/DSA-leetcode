class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.length();

        for (int i = n / 2; i >= 1; i--)
        {
            if (n % i == 0)
            {
                string subString = s.substr(0, i);
                string newString = "";

                for (int j = 0; j < n / i; j++)
                {
                    newString.append(subString);
                }

                if (newString == s)
                {
                    return true;
                }
            }
        }
        return false;
    }
};