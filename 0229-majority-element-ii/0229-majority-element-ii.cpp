class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        unordered_map<int, int> m;
        for(int i : nums)
            m[i]++;
        
        for(auto it:m) {
            if(it.second > nums.size()/3)
                v.emplace_back(it.first);
        }
        return v;
    }
};