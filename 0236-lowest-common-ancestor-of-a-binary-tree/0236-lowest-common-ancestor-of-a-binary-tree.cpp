/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        if(root==p||root==q) return root;
        TreeNode* leftAncestor=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightAncestor=lowestCommonAncestor(root->right,p,q);
        if(leftAncestor==NULL&&rightAncestor==NULL)return NULL;
        if(leftAncestor!=NULL&&rightAncestor==NULL)return leftAncestor;
        if(leftAncestor==NULL&&rightAncestor!=NULL)return rightAncestor;
        else return root;
    }
};