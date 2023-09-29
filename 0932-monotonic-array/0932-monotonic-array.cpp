class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = 1;
        bool dec = 1;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] > nums[i-1])
                dec = 0;
            else if(nums[i] < nums[i-1])
                inc = 0;
            if(!inc && !dec) return 0;
        }
        return 1;
    }
};