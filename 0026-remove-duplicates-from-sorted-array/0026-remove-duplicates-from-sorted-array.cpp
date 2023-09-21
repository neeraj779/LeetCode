class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        // int n = nums.size();
        // int i  = 0;
        // for(int j = 1; j < n; ++j){
        //     if(nums[i] != nums[j]){
        //         nums[i+1] = nums[j];
        //         i++;
        //     }
        // }
        // return i+1;
        v.erase(unique(v.begin(), v.end()), v.end());
        return v.size();
    }
};