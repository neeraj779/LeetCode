class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0, mid, high = n*m-1;
        while(low <= high){
            mid = low + (high - low)/2;

            // Calculate the row number for the element at 'mid'
            // Example: If 'mid' is 7 and 'm' is 3, it's like counting rows from the top: 0, 1, 2.
            int rowNumber = mid/m; 
            // Calculate the column number for the element at 'mid'
            // Example: If 'mid' is 7 and 'm' is 3, it's like counting columns from the left: 0, 1, 2.
            int colNumber = mid%m;
            int ele = matrix[rowNumber][colNumber];
            if(ele == target) return 1;
            else if(ele < target) low = mid + 1;
            else high = mid - 1;
        }

        return 0;
    }
};