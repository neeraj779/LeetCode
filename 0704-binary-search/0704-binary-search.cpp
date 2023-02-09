class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int mid;
        int e = nums.size() - 1;
        while(s<=e){
            mid = s + (e-s)/2;
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) s = mid + 1;
            else e = mid - 1;
        }
        return -1;
    }
};