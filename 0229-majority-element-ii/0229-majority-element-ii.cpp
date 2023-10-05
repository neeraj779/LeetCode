class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int count;
        int occ = nums.size()/3;
        for(int i = 0; i < nums.size(); ++i){
            count = 0;
            if(v.size() == 0 || v[0] != nums[i]){
                for(int j = 0; j < nums.size(); ++j){
                    if(nums[i] == nums[j]) count++;
                }
                if(count > occ) v.emplace_back(nums[i]);
            }
            if(v.size() == 2) break;
        }
        return v;
    }
};