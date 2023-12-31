class Solution
{
public:
    Node *getMiddle(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;

        while (fast->next != NULL && fast != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if (head->next == NULL)
        {
            return true;
        }

        Node *middle = getMiddle(head);

        // reverse after middle
        Node *temp = middle;

        middle->next = reverse(middle);

        // step 3  compare both halfs
        Node *head1 = head;
        Node *head2 = middle->next;

        while (head1 != NULL && head2 != NULL)
        {
            if (head1->data != head2->data)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        // repeate step 2;
        temp = middle->next;
        middle->next = reverse(temp);

        return true;
    }
};