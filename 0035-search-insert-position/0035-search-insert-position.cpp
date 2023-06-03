class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int s =0;
        // int e = nums.size()-1;
        // int mid;
        // while(s<=e){
        //     mid = s + (e-s)/2;
        //     if(nums[mid]==target)
        //         return mid;
        //     else if(nums[mid] < target){
        //         s = mid + 1;
        //     }
        //     else{
        //         e =  mid - 1;
        //     }
        // }
        int res = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        return res;
    }
};