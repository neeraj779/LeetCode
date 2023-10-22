class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int i = k, j = k, res = nums[k], currMin = nums[k];
        while(i > 0 || j < nums.size() - 1){
            int leftValue = (i > 0)? nums[i-1] : 0;
            int rightValue = (j < nums.size() - 1) ? nums[j+1] : 0;
            if(leftValue > rightValue){
                i--;
                currMin = min(currMin, nums[i]);
            }
            else{
                j++;
                currMin = min(currMin, nums[j]);
            }
            res = max(res, currMin * (j - i + 1));
        }
        return res;
    }
};