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
    bool solve(TreeNode* root, long long min, long long max){
        if(!root) return 1;
        
        if(root->val > min && root->val < max){
            bool left = solve(root->left, min, root->val);
            bool right = solve(root->right, root->val, max);
            return left && right;
        }
        return 0;
    }
public:
    bool isValidBST(TreeNode* root) {
        return solve(root, LLONG_MIN, LLONG_MAX );
    }
};