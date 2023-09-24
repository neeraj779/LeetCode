class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int posIndex = 0; 
        int negIndex = 1;
        for(int i = 0; i < n; ++i){
            if(nums[i] < 0){
                v[negIndex] = nums[i];
                negIndex +=2;
            }
            else{
                v[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return v;
    }
};