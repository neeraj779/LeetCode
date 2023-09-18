class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, mid;
        while(low<=high){
            mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;

            //left half
            if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]) high = mid-1;
                else low = mid+1;
            }

            //right half
            else{
                if(target>=nums[mid] && target<=nums[high]) low = mid+1;
                else high = mid-1;
            }
        }
        return -1;
    }
};