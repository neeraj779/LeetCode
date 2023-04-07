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
        ListNode *temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        int mid;
        if(count&1) mid = count/2;
        else mid = (count/2);
        cout<<mid<<" "<<count;
        
        temp = head;
        while(mid){
            temp = temp->next;
            mid--;
        }
        return temp;     
    }
};