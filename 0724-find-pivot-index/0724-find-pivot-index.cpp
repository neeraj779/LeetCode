class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum(nums.size()+1);
        int n = nums.size();
        for(int i=0; i<n; i++){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        
        for(int i=0; i<n;i++){
            int leftSum = prefixSum[i];
            int rightSum = prefixSum[n] - prefixSum[i+1];
            if(leftSum==rightSum) return i;   
        }
        return -1;
    }
};