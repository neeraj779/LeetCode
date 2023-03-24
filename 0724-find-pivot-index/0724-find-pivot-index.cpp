class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum(nums.size()+1,0);
        for(int i=0; i<nums.size(); i++){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        
        for(int i=0; i<nums.size();i++){
            int leftSum = prefixSum[i];
            int rightSum = prefixSum[nums.size()] - prefixSum[i+1];
            if(leftSum==rightSum) return i;   
        }
        return -1;
    }
};