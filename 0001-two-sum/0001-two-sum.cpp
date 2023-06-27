class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> m;
        for(int i = 0; i<n; ++i){
            int a = nums[i];
            int more = target - a;
            if(m.find(more) != m.end())
                return {m[more], i};
            m[a] = i;
        }
        return {-1, -1};
    }
};