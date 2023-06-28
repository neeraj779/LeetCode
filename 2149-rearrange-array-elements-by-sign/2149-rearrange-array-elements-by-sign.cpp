class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int> v;
        for(int i=0; i<n; i++){
            if(nums[i]>0)
                pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        int posIndex = 0;
        int negIndex = 0;

        // Alternate between positive and negative values
        while (posIndex < pos.size()) {
                v.push_back(pos[posIndex++]);
                v.push_back(neg[negIndex++]);
        } 
        return v;
    }
};