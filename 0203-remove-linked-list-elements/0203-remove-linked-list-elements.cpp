/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *prev = head;
        ListNode *curr = head;

        while (curr != NULL)
        {
            if (head->val == val)  // del in starting
            {
                head = head->next;
                prev = curr;
                curr = curr->next;
            }

            else if (curr->val == val) //del in between 
            {
                prev->next = curr->next;
                curr = curr->next;
            }

            else
            {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};