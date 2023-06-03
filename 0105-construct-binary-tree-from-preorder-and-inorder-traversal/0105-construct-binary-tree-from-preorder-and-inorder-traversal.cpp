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
    // int findPosition(const vector<int> &inorder, int target)
    // {
    //     for (int i = 0; i < inorder.size(); ++i)
    //     {
    //         if (inorder[i] == target)
    //             return i;
    //     }
    //     return -1;
    // }

    void createMapping(const vector<int> &inorder, map<int, int> &nodeToIndex)
    {
        for (int i = 0; i < inorder.size(); ++i)
        {
            nodeToIndex[inorder[i]] = i;
        }
    }

    TreeNode *buildTreeHelper(const vector<int> &preorder, const vector<int> &inorder, int &preorderIndex, int preorderEnd, int inorderStart, int inorderEnd, map<int, int> &nodeToIndex)
    {
        if (preorderIndex >= preorderEnd || inorderStart > inorderEnd)
            return nullptr;

        int rootValue = preorder[preorderIndex++];
        TreeNode *root = new TreeNode(rootValue);
        // int rootPosition = findPosition(inorder, rootValue);
        int rootPosition = nodeToIndex[rootValue];

        root->left = buildTreeHelper(preorder, inorder, preorderIndex, preorderEnd, inorderStart, rootPosition - 1, nodeToIndex);
        root->right = buildTreeHelper(preorder, inorder, preorderIndex, preorderEnd, rootPosition + 1, inorderEnd, nodeToIndex);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int preorderIndex = 0;
        map<int, int> nodeToIndex;
        createMapping(inorder, nodeToIndex);
        TreeNode *root = buildTreeHelper(preorder, inorder, preorderIndex, preorder.size(), 0, inorder.size() - 1, nodeToIndex);
        return root;
    }
};