#include <vector>

class Solution
{
public:
    bool checkPalindrome(vector<int> arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        while (s <= e)
        {
            if (arr[s] != arr[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        vector<int> arr;

        Node *temp = head;
        while (temp != NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        };

        // two pointer approach
        return checkPalindrome(arr);
    }
};
