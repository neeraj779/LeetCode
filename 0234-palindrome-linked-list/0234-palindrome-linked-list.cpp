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
  ListNode *getMid(ListNode *head)
  {
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
  }

  ListNode *reverse(ListNode *head)
  {
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *next = NULL;

    while (curr != NULL)
    {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;
  }

public:
  bool isPalindrome(ListNode *head)
  {
    if (head->next == NULL)
      return 1;

    // step 1: find middle
    ListNode *mid = getMid(head);

    // Step 2: reverse list after middle
    ListNode *temp = mid->next;
    mid->next = reverse(temp);

    // compare both halfs
    ListNode *head1 = head;
    ListNode *head2 = mid->next;
    while(head2 != NULL)
    {
      if (head1->val != head2->val){
        return 0;
      }
        head1 = head1->next;
        head2 = head2->next;
    
    }
      // step 4: revert list back(repeat step 2)
       temp = mid->next;
       mid->next = reverse(temp);
    return 1;
  }
};