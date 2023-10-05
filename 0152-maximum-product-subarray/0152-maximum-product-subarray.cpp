class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res{INT_MIN}, prefix{1}, suffix{1};
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(!prefix) prefix = 1;
            if(!suffix) suffix = 1;
            prefix *= nums[i];
            suffix *= nums[n-1-i];
            res = max(res, max(prefix, suffix));
        }
        return res;
    }
};