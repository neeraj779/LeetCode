class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // vector<int> temp(n);
        // for(int i = 0 ; i<n;i++){
        //     temp[(i+k)%n] = nums[i];
        // }
        // nums = temp;
        int n = nums.size();
        k %= n; // to handle cases where k > n
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};