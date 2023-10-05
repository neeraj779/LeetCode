class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        unordered_map<int, int> m;
        int mini = (nums.size() / 3)  + 1;
        for(int i : nums){
            m[i]++;
            if(m[i] == mini)
                v.emplace_back(i);
            if(v.size() == 2) break;
        }
        return v;
    }
};