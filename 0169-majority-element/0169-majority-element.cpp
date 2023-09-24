class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0, element;
        for(int i:nums){
            if(!count){
                count = 1;
                element = i;
            }
            else if (i == element) count++;
            else count--;
        }

        count = 0;
        for(int i:nums)
            if(i == element) count++;
        return count > n/2 ? element : -1;
    }
};