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
    ListNode* middleNode(ListNode* head) {
//         ListNode *temp = head;
//         int count = 0;
//         while(temp!=NULL){
//             count++;
//             temp = temp->next;
//         }
        
//         int mid = count/2;
//         temp = head;
//         while(mid){
//             temp = temp->next;
//             mid--;
//         }
//         return temp;      
        
        
        ListNode *fast = head->next;
        ListNode *slow = head; 
        
        if(head==NULL || head->next == NULL){
            return head;
        }
        
        else if(head->next->next == NULL) return head->next;
        
        while(fast != NULL){
            fast = fast->next;
            if(fast!=NULL) fast = fast->next;
            slow = slow->next;
        }
        return slow;
        
    }
};