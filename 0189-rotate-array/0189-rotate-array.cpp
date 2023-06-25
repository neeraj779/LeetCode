class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        k %= nums.size();
        reverse(nums.begin(), (nums.begin() + nums.size()) - k); // Reverse the end k elements
        reverse((nums.begin() + nums.size()) - k, nums.end()); // Reverse the beginning n-k elements
        reverse(nums.begin(), nums.end()); // Reverse the entire array
    }
};