class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int startingRow = 0, endingRow = row - 1;
        int startingCol = 0, endingCol = col - 1;
        int count = 0;
        int total = row * col;
        vector<int> ans;

        while (count < total)
        {
            // traverse starting row
            for (int index = startingCol; count < total && index <= endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            // traverse ending col
            for (int index = startingRow; count < total && index <= endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // traverse ending row
            for (int index = endingCol; count < total && index >= startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // traverse starting col
            for (int index = endingRow; count < total && index >= startingRow; index--)
            {

                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};