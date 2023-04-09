/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return head;
        ListNode * slow = head;
        ListNode* fast = head;
        
        
        while(slow != NULL && fast != NULL){
            fast = fast->next;
            if(fast != NULL) fast = fast->next;
            slow = slow->next;
            if(slow==fast) {
                break;
            }
        
        }
        if(slow== NULL|| fast ==NULL) return NULL;
        slow = head;
        while( slow != fast){
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};