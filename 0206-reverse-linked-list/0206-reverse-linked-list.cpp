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
private:
    ListNode *reverse(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *chottaHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return chottaHead;
    }

    void recReverse(ListNode *&head, ListNode *&curr, ListNode *&prev)
    {
        if (curr == NULL)
        {
            head = prev;
            return;
        }

        recReverse(head, curr->next, curr);
        curr->next = prev;
    }

public:
    ListNode *reverseList(ListNode *head)
    {
        // if(head==NULL || head->next ==NULL) return head;
        // ListNode *prev = NULL;
        // ListNode *curr = head;
        // ListNode *forw = NULL;
        // while(curr != NULL){
        //     forw = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = forw;
        // }
        // return prev;
        // recReverse(head, curr, prev);
        // return head;
        return reverse(head);
    }
};