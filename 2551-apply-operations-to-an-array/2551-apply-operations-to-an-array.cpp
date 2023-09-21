class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> v(nums);
        int n = v.size();
        for(int i = 0; i < n - 1; ++i){
            if(v[i] == v[i+1]){
                v[i] *= 2;
                v[i+1] = 0;
            }
        }
        
        int nonZeroIndex = 0;
        for(int i = 0; i<n; i++){
            if(v[i] != 0)
                swap(v[i], v[nonZeroIndex++]);
        }
        return v;
    }
};