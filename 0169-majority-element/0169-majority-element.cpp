class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer-Moore Majority Voting Algorithm
        int n = nums.size();
        int ele{0}, cnt{0};
        for(int i = 0; i < n; ++i){
            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
            }
            else if(nums[i] == ele)
                cnt++;
            else
                cnt--;
        }
        return ele;
    }
};