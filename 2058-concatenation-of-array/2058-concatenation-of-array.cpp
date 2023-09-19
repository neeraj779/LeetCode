class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        for(int i=0; i<2; ++i){
            for(int i:nums){
                v.push_back(i);
            }
        }
        return v;
    }
};