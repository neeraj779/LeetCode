
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if (n <= 1) return n;
        int i = 0, j = 1;
        while (j < n) {
            if (nums[j] != nums[i]) {
                nums[++i] = nums[j];
            }
            j++;
        }
        return i + 1;
    }
};