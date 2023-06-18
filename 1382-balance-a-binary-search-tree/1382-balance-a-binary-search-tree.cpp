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
    // Helper function to perform inorder traversal and store node values in a vector
    void inorder(TreeNode *root, vector<int> &v)
    {
        if (!root)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    // Recursive helper function to create a balanced BST from a sorted vector
    TreeNode *createBst(int start, int end, vector<int> &v)
    {
        // Base case: if the start index is greater than the end index, return nullptr
        if (start > end)
            return nullptr;

        // Calculate the mid index and create a new TreeNode with the value at the mid index
        int mid = (start + end) / 2;
        TreeNode *root = new TreeNode(v[mid]);

        // Recursively create the left and right subtrees
        root->left = createBst(start, mid - 1, v);
        root->right = createBst(mid + 1, end, v);

        return root;
    }

public:
    TreeNode *balanceBST(TreeNode *root)
    {
        vector<int> v;
        inorder(root, v);
        return createBst(0, v.size() - 1, v);
    }
};