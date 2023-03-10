class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        if (row == 0) return 0;
        int col = matrix[0].size();
        int rowIndex = 0;
        int colIndex = col - 1;

        while (rowIndex < row && colIndex >= 0)
        {
            int ele = matrix[rowIndex][colIndex];
            if (ele == target)
                return 1;
            else if (ele < target)
                rowIndex++;
            else
                colIndex--;
        }
        return 0;
    }
};