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
    bool solve(TreeNode* root, int targetSum){
        if(!root) 
            return 0;
        if(!root->left && !root->right)
            return root->val == targetSum;
        
        int remainingSum = targetSum - root->val;
        
        bool leftSum = solve(root->left, remainingSum);
        if(leftSum) return 1;
        bool rightSum = solve(root->right, remainingSum);
        return rightSum;
    }
    
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, targetSum);
    }
};