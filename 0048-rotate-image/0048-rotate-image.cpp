class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> copy(matrix);
        for(int i = 0; i < copy.size(); ++i){
            for(int j = 0; j < copy.size(); ++j){
                matrix[j][copy.size()-i-1] = copy[i][j];
            }
        }
    }
};