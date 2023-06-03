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
    void createMapping(const vector<int> &inorder, map<int, int> &nodeToIndex)
    {
        for (int i = 0; i < inorder.size(); ++i)
        {
            nodeToIndex[inorder[i]] = i;
        }
    }

    TreeNode *buildTreeHelper(const vector<int> &postorder, const vector<int> &inorder, int &postorderIndex, int postorderEnd, int inorderStart, int inorderEnd, map<int, int> &nodeToIndex)
    {
        if (postorderIndex < 0 || inorderStart > inorderEnd)
            return nullptr;

        int rootValue = postorder[postorderIndex--];
        TreeNode *root = new TreeNode(rootValue);
        // int rootPosition = findPosition(inorder, rootValue);
        int rootPosition = nodeToIndex[rootValue];

        // Recursively build the right and left subtrees (right call first for postorder traversal)
        root->right = buildTreeHelper(postorder, inorder, postorderIndex, postorderEnd, rootPosition + 1, inorderEnd, nodeToIndex);

        root->left = buildTreeHelper(postorder, inorder, postorderIndex, postorderEnd, inorderStart, rootPosition - 1, nodeToIndex);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int postorderIndex = postorder.size() - 1;
        map<int, int> nodeToIndex;
        createMapping(inorder, nodeToIndex);
        TreeNode *root = buildTreeHelper(postorder, inorder, postorderIndex, postorder.size(), 0, inorder.size() - 1, nodeToIndex);
        return root;
    }
};