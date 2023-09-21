class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i:nums) s.insert(i);
        int ind = 0;
        for(int i:s){
            nums[ind++] = i;
        }
        return s.size();
    }
};