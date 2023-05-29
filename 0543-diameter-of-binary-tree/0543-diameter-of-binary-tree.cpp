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
class Solution
{
private:
    // int height(TreeNode* root){
    //     if(!root) return 0;
    //     int left = height(root->left);
    //     int right = height(root->right);
    //     return max(left, right) + 1;
    // }

    pair<int, int> fastDiameterOfBinaryTree(TreeNode *root)
    {
        if (!root)
        {
            pair<int, int> p = make_pair(0, 0);
            return p;
        }

        pair<int, int> left = fastDiameterOfBinaryTree(root->left);
        pair<int, int> right = fastDiameterOfBinaryTree(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second;

        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        // if(!root) return 0;
        // int op1 = diameterOfBinaryTree(root->left);
        // int op2 = diameterOfBinaryTree(root->right);
        // int op3 = height(root->left) + height(root->right);
        // int ans = max(op1, max(op2, op3));

        return fastDiameterOfBinaryTree(root).first;
    }
};