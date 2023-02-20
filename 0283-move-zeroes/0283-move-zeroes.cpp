class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero = 0;
    for(int num : nums){
        if(num != 0){
            nums[nonZero++] = num;
        }
    }
    while(nonZero < nums.size()){
        nums[nonZero++] = 0;
    }
    }
};