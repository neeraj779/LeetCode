/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        map<ListNode*, bool> visited;
        ListNode* temp = head;
        while(temp != nullptr){
            if(visited[temp]==1){
                return temp;
            }
            visited[temp] = 1;
            temp = temp->next;
        }
        
        return nullptr;
        
        
        
        
//         if (head == NULL)
//             return head;

//         ListNode *slow = head, *fast = head;

//         while (fast != NULL && fast->next != NULL)
//         {
//             fast = fast->next;
//             if (fast != NULL)
//                 fast = fast->next;
//             slow = slow->next;
//             if (slow == fast)
//             {
//                 slow = head;
//                 while (slow != fast)
//                 {
//                     slow = slow->next;
//                     fast = fast->next;
//                 }
//                 return slow;
//             }
//         }
//         return NULL;
    }
};