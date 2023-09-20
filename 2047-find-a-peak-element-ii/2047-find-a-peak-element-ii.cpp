class Solution
{
private:
    int findMaxIndex(vector<vector<int>> &mat, int n, int col)
    {
        int maxElement = -1, maxIndex = -1;
        for (int i = 0; i < n; ++i)
        {
            if (mat[i][col] > maxElement)
            {
                maxElement = mat[i][col];
                maxIndex = i;
            }
        }
        return maxIndex;
    }

public:
    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, mid, high = m - 1;

        while (low <= high)
        {
            mid = low + (high - low) / 2;
            int maxRowIndex = findMaxIndex(mat, n, mid);
            int left = mid - 1 >= 0 ? mat[maxRowIndex][mid - 1] : -1;
            int right = mid + 1 < m ? mat[maxRowIndex][mid + 1] : -1;

            if (mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right)
                return {maxRowIndex, mid};

            else if (mat[maxRowIndex][mid] < left)
                high = mid - 1;
            else
              low = mid + 1;  
        }
        return {-1, -1};
    }
};