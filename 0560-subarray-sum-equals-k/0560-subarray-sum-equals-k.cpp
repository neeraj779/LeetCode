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
            // if(prefixSum.find(rem) != prefixSum.end())
            // The next line adds the count of subarrays that end at the current position
            // and have a sum of 'k - rem', effectively extending them to include the
            // current element and form valid subarrays with a sum of 'k'.
            count += prefixSum[rem];
            prefixSum[sum]++;
        }
        return count;
    }
};