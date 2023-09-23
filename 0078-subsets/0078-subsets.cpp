class Solution {
private:
    void solve(vector<int>& nums, vector<int>& res, int n, int i, vector<vector<int>>& v){
        if(i >= n){
            v.push_back(res);
            return;
        }
        res.push_back(nums[i]);
        solve(nums, res, n, i+1, v);
        res.pop_back();
        solve(nums, res, n, i+1, v);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> ds;
        solve(nums, ds, nums.size(), 0, v);
        return v;
    }
};