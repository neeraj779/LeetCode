/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        while(curr != nullptr){
            if(curr->left){
                TreeNode *pred = curr->left; //ek left jao and then right jate raho
                while(pred->right != nullptr)
                    pred = pred->right;
                
                pred->right = curr->right;
                curr->right = curr->left;
                // curr->left = nullptr;
            }
            curr = curr->right;
        }
        curr=root;
        while(curr != nullptr){
            curr->left = nullptr;
            curr = curr->right;
        }
    }
};