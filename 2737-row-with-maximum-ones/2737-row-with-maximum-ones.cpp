class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = -1;
        int n = mat.size();
        int maxOnes = -1;
        for(int i = 0; i<n; ++i){
            int rowSum = 0;
            int m = mat[i].size();
            for(int j = 0; j<m; ++j){
                rowSum += mat[i][j];
            }
            if(rowSum > maxOnes) {
                maxOnes = rowSum;
                index = i;
            }
        }
        return{index, maxOnes};
    }
};