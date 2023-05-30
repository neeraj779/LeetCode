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
    // private:
    //     int height (TreeNode* root){
    //         if(!root) return 0;
    //         int left = height(root->left);
    //         int right = height(root->right);
    //         return max(left, right) + 1;
    //     }

    pair<bool, int> isBalancedFast(TreeNode *root)
    {
        if (!root)
        {
            pair<bool, int> p = make_pair(1, 0);
            return p;
        }

        pair<bool, int> left = isBalancedFast(root->left);
        pair<bool, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        if (leftAns && rightAns && diff)
            ans.first = 1;
        else
            ans.first = 0;
        return ans;
    }

public:
    bool isBalanced(TreeNode *root)
    {
        //         if(!root) return 1;

        //         bool left = isBalanced(root->left);
        //         bool right = isBalanced(root->right);

        //         bool diff = abs(height(root->left) - height(root->right)) <= 1;
        //         if(left && right && diff) return 1;
        //         return 0;

        return isBalancedFast(root).first;
    }
};