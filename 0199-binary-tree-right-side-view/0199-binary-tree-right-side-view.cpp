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
    void solve(TreeNode* root, vector<int> &v, int lvl=0){
        if(!root) return;
        
        if(lvl==v.size())
            v.push_back(root->val);
        
        solve(root->right, v, lvl+1);
        solve(root->left, v, lvl+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        solve(root, v);
        return v;
    }
};