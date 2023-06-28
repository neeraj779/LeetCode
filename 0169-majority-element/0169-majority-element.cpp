class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> m;
        for(int i=0; i<n; ++i){
            m[nums[i]]++;
        }
        
        for (auto it : m) {
            if (it.second > (n / 2)) 
                return it.first;
        }      
        
        return -1;
    }
};