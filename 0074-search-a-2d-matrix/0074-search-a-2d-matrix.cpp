class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i<n; ++i){
            if(matrix[i][0] <= target && matrix[i][m-1] >= target)
                return binary_search(matrix[i].begin(), matrix[i].end(), target);
        }
        return 0;
    }
};