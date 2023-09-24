class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int evenIndex = 0;
        int oddIndex = 1;
        for(int i = 0; i < n; ++i){
            if(nums[i]&1){
                v[oddIndex] = nums[i];
                oddIndex += 2;
            }
            else{
                v[evenIndex] = nums[i];
                evenIndex += 2;
            }
        }
        return v;
    }
};