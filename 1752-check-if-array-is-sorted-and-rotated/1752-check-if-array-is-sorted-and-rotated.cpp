class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]) count++;
            if (count == 2) return false;
        }
        return count<=1;
    }
};