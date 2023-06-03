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
private:
    void solve(TreeNode* root, int targetSum, vector<int> v, int &count){
        if(!root) return;
        
        v.push_back(root->val);
        solve(root->left, targetSum, v, count);
        solve(root->right, targetSum, v, count);
        
        //check sum from back
        int size = v.size();
        long int pathSum = 0;
        for(int i = size-1; i>=0; --i){
              pathSum += v[i];
            if(pathSum==targetSum)
                count++;
        }

        v.pop_back();
        
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        int count = 0;
        solve(root, targetSum, v, count);
        return count;
    }
};