class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum(nums.size()+1);
        int n = nums.size();
        for(int i=0; i<n; i++){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        
        for(int i=0; i<n;i++){
            if(prefixSum[i]==prefixSum[n] - prefixSum[i+1]) return i;   
        }
        return -1;
    }
};