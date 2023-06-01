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
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        // Map to store nodes at each horizontal distance and level
        // map<int, map<int, multiset<int>>> nodeMap; // Using multiset for automatic sorting
        
        map<int, map<int, vector<int>>> nodeMap; // need to sort manually


        // Queue to perform level order traversal
        queue<pair<TreeNode *, pair<int, int>>> q;

        vector<vector<int>> result;

        if (!root)
            return result;

        // Push the root node with horizontal distance and level as 0
        q.push(make_pair(root, make_pair(0, 0)));

        // Perform level order traversal
        while (!q.empty())
        {
            // Get the front node and its associated horizontal distance and level
            pair<TreeNode *, pair<int, int>> temp = q.front();
            q.pop();

            TreeNode *currentNode = temp.first;
            int horizontalDistance = temp.second.first;
            int level = temp.second.second;

            // Store the node value in the map
            // nodeMap[horizontalDistance][level].insert(currentNode->val); // for multiset
            
            nodeMap[horizontalDistance][level].push_back(currentNode->val);


            // Enqueue left child if it exists, with updated horizontal distance and level
            if (currentNode->left)
                q.push(make_pair(currentNode->left, make_pair(horizontalDistance - 1, level + 1)));

            // Enqueue right child if it exists, with updated horizontal distance and level
            if (currentNode->right)
                q.push(make_pair(currentNode->right, make_pair(horizontalDistance + 1, level + 1)));
        }

        // Traverse the map and build the result vector
        for (auto i : nodeMap) {
            vector<int> temp;
            for (auto j : i.second) {
                sort(j.second.begin(), j.second.end()); // if we are using vector instead of multiset
                for (auto k : j.second) {
                    temp.push_back(k);
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
