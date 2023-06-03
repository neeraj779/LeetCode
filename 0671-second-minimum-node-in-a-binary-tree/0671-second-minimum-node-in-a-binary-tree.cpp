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
    void solve(TreeNode* root, set<int> &s){
        if(!root) return;
        solve(root->left, s);
        s.insert(root->val);
        solve(root->right, s);
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        if(!root) return -1;
        set<int> s;
        solve(root, s);
        if(s.size()==1)
           return -1 ;
          s.erase(s.begin());
          return *s.begin();
    }
};