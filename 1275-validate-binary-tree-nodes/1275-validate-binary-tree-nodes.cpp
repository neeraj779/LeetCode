class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int> &leftChild, vector<int> &rightChild)
    {
        vector<int> inDegree(n, 0);
        int root = -1;

        for (int i = 0; i < n; i++)
        {
            if (leftChild[i] != -1)
            {
                if (++inDegree[leftChild[i]] > 1)
                {
                    return false;
                }
            }
            if (rightChild[i] != -1)
            {
                if (++inDegree[rightChild[i]] > 1)
                {
                    return false;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (inDegree[i] == 0)
            {
                if (root == -1)
                {
                    root = i;
                }
                else
                {
                    return false;
                }
            }
        }

        return countNodes(leftChild, rightChild, root) == n;
    }

private:
    int countNodes(vector<int> &leftChild, vector<int> &rightChild, int root)
    {
        if (root == -1)
        {
            return 0;
        }
        return 1 + countNodes(leftChild, rightChild, leftChild[root]) + countNodes(leftChild, rightChild, rightChild[root]);
    }
};