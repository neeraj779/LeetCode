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
    int solve(TreeNode *root, int &ans)
    {
        if (!root)
            return 0;

        int left = solve(root->left, ans);
        int right = solve(root->right, ans);
        int path = root->val;
        path = max(path, path + left);
        path = max(path, path + right);

        ans = max(ans, path);
        return max(root->val, root->val + max(left, right));
    }
    
public:
    int maxPathSum(TreeNode *root)
    {
        int ans = root->val;
        solve(root, ans);
        return ans;
    }
};