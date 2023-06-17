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
void solve(TreeNode* root, vector<int> &v){
    if(!root) return;
    solve(root->left, v);
    v.push_back(root->val);
    solve(root->right, v);
}
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return 0;
        vector<int> v;
        solve(root, v);
        int i = 0;
        int j = v.size() - 1;
        while(i<j){
            int sum = v[i] + v[j];
            if(sum == k) return 1;
            else if(sum > k) j--;
            else if(sum < k) i++;
        }
        return 0;
    }
};