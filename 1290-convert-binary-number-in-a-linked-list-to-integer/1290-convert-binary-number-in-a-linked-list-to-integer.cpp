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
    int getDecimalValue(ListNode* head) {
        int res{0};
        
        int numDigits = 0;
        ListNode* temp = head;
        while (temp) {
            numDigits++;
            temp = temp->next;
        }
        
        while(head != nullptr){
            res += head->val*pow(2, numDigits-1);
            numDigits--;
            head = head->next;
        }
        return res;
    }
};