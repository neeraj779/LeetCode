for SC of O(1).
int n = nums.size();
k %= n; // to handle cases where k > n
reverse(nums.begin(), nums.end());
reverse(nums.begin(), nums.begin() + k);
reverse(nums.begin() + k, nums.end());