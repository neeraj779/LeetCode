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
    int solve(TreeNode *root, int k, int &i)
    {
        if (!root)
            return -1;

        // L
        int left = solve(root->left, k, i);
        if (left != -1)  // left subtree has k elements in it so return left element from left subtree itself
            return left; // this will be the kth smallest element in the tree
        // N
        i++;
        if (i == k)
            return root->val;
        // R
        return solve(root->right, k, i); // if left subtree doesn't have k elements then check in right subtree
    }

public:
    int kthSmallest(TreeNode *root, int k)
    {
        int i = 0;
        return solve(root, k, i);
    }
};