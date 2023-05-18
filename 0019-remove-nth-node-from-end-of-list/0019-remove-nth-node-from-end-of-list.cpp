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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        
        int len = 0;
        while(temp != NULL){
            ++len;
            temp= temp->next;
        }
        cout<<len;
        
        if(len==1){
            head = NULL;
            return head;
        }

        int tarPos = len - n;
        
        if(tarPos==0){
            head = head->next;
            return head;
        }
        
        temp = head;
        for(int i=1; i<tarPos; i++){
            temp= temp->next;
        }
    
        
        ListNode* tempDel = temp->next;
        temp->next = tempDel->next;
        return head;
        
    }
};