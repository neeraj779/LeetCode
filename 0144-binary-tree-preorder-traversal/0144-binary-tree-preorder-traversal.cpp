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
private:
    void solve(TreeNode *root, vector<int> &v){
        if(!root) return;
        v.push_back(root->val);
        solve(root->left, v);
        solve(root->right, v);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        // solve(root, v);
        
        //morris traversal
        // morris traversal
        TreeNode* curr = root;
        while(curr != nullptr){
            if(curr->left == nullptr){
                v.push_back(curr->val);
                curr = curr->right;
            }
            
            else{
                TreeNode *pred = curr->left; //ek left jao and then right jate raho
                while(pred->right != NULL && pred->right != curr){
                    pred = pred->right;
                }
                
                if(pred->right == nullptr){
                    pred->right = curr;
                    v.push_back(curr->val);
                    curr = curr->left;
                }
                
                else{
                    pred->right = nullptr;
                    curr = curr->right;
                }
            }
        }
        return v;
        
    }
};