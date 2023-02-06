class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(nums[i])) {
                ans.push_back(nums[i]);
            } else {
                seen.insert(nums[i]);
            }
        }
        return ans;
    }
};