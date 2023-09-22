class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int sum = 0;
        map<int, int> prefixSum;
        prefixSum[0] = 1;
        for(int i = 0; i < n; ++i){
            sum = (sum+nums[i]%k+k)%k;
            if(prefixSum.find(sum) != prefixSum.end())  count += prefixSum[sum];
            prefixSum[sum]++;
        }
        return count;
    }
};