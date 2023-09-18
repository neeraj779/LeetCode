class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, mid, high = nums.size()-1;
        int ans = INT_MAX;
        while(low<=high){
            mid = low + (high - low)/2;
            
            if(nums[low]==nums[mid] && nums[mid] == nums[high]){
                ans = min(ans, nums[low]);
                low++;
                high--;
                continue;
            }

            // left sorted take the minimun and eliminate
            if(nums[low]<=nums[mid]){
                ans = min(ans, nums[low]);
                low = mid+1;
            }
            else{
                ans = min(ans, nums[mid]);
                high = mid-1;
            }
        }
        return ans;
    }
};