class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> m;
        for(int i=0; i<n; ++i){
            m[nums[i]]++;
        }
        
        int res = n/2;
        int ans = 0;
        for(auto i:m){
            if(i.second > res) ans = i.first;
        }
        
        return ans;
    }
};