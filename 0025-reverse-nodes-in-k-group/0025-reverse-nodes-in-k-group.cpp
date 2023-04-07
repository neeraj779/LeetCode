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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1) return head;
        
        //reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        int length = 0;
        int count = 0;
        
        //for checking if elements are sufficient for reverse
        while(curr != NULL){
            length++;
            curr = curr->next;
        }
        
        curr = head;
        
        if (length < k) 
            return head;
        
        while(curr != NULL && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        // next reverse using recursion
        if(next != NULL){
            head->next = reverseKGroup(next, k);
        }
        
        return prev;
    }
};