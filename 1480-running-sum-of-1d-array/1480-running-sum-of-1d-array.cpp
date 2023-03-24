class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j = i; j>=0; j-- ){
                sum += nums[j];
            }
            res.push_back(sum);
        }
        return res;
    }
};