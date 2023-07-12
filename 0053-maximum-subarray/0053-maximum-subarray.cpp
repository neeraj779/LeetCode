class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum{0};
        int maxSum{nums[0]};
        
        int n = nums.size();
        for(int i = 0; i<n; ++i){
            if(sum<0)
                sum=0;
            sum += nums[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};