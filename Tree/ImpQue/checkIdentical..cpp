#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        // both are NULL
        if (r1 == NULL && r2 == NULL)
        {
            return true;
        }

        if ((r1 == NULL && r2 != NULL) || (r1 != NULL && r2 == NULL))
        {
            return false;
        }

        bool left = isIdentical(r1->left, r2->left);
        bool right = isIdentical(r1->right, r2->right);

        bool val = r1->data == r2->data;

        if (val && left && right)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
