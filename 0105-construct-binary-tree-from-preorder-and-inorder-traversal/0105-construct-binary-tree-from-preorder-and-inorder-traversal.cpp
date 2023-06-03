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
    int findPosition(const vector<int> &inorder, int target)
    {
        for (int i = 0; i < inorder.size(); ++i)
        {
            if (inorder[i] == target)
                return i;
        }
        return -1;
    }

    TreeNode *buildTreeHelper(const vector<int> &preorder, const vector<int> &inorder, int &preorderIndex, int preorderEnd, int inorderStart, int inorderEnd)
    {
        if (preorderIndex >= preorderEnd || inorderStart > inorderEnd)
            return nullptr;

        int rootValue = preorder[preorderIndex++];
        TreeNode *root = new TreeNode(rootValue);
        int rootPosition = findPosition(inorder, rootValue);

        root->left = buildTreeHelper(preorder, inorder, preorderIndex, preorderEnd, inorderStart, rootPosition - 1);
        root->right = buildTreeHelper(preorder, inorder, preorderIndex, preorderEnd, rootPosition + 1, inorderEnd);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int preorderIndex = 0;
        TreeNode *root = buildTreeHelper(preorder, inorder, preorderIndex, preorder.size(), 0, inorder.size() - 1);
        return root;
    }
};