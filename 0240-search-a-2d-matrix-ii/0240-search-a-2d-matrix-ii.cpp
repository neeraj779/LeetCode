class Solution {
private:
    // int bs(vector<int>& matrix, int m, int target) {
    //     int low = 0, mid, high = m-1;
    //     while(low <= high){
    //         mid = low + (high - low)/2;
    //         if(matrix[mid] == target) return 1;
    //         if(matrix[mid] < target) low = mid + 1;
    //         else high = mid - 1;
    //     }
    //     return -1;
    // }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        // for(int i=0; i<n; ++i){
        //     int index = bs(matrix[i], m, target);
        //     if(index != -1){
        //         return 1;
        //     }
        // }

        int row = 0;
        int col = m-1;
        while(row < n && col>=0){
            if(matrix[row][col] == target) return 1;
            else if(matrix[row][col] < target) row++;
            else col--;
        }
        return 0;
    }
};