class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int sum = 0;
        map<int, int> prefixSum;
        for(int i = 0; i < n; ++i){
            sum += nums[i];
            if(sum == k) count++;
            int rem =  sum - k;
            if(prefixSum.find(rem) != prefixSum.end())  count += prefixSum[rem];
            prefixSum[sum]++;
        }
        return count;
    }
};