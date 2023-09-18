class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // Brute force 1:
        // int n = nums.size();
        // for(int i = 0; i<n; ++i){
        //    if((i == 0 || (nums[i] != nums[i - 1])) && (i == n-1 || ( nums[i] != nums[i + 1])))
        //         return nums[i];
        // }
        // return -1;

        // Brute force 2:
        // int n = nums.size();
        // int ans = 0;
        // for(int i = 0; i<n; ++i) ans = ans ^ nums[i];
        // return ans;

        // Using Binary Search:
        int n = nums.size();
        if(n==1 || nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int low = 1, mid, high = n-2;
        while(low<=high){
            mid = low + (high - low)/2;
            if((nums[mid] != nums[mid-1]) && (nums[mid] != nums[mid+1])) 
                return nums[mid];

            // (even, odd) on odd ---> even || on even ---> odd
            if(mid&1 && nums[mid-1] == nums[mid] || !(mid&1) && nums[mid] == nums[mid+1]) 
                low = mid+1;
            // (odd, even) trim the right side
            else 
                high = mid-1;
        }
        return -1;
    }
};