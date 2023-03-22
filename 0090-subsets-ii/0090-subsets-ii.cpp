class Solution {
private:
    void subsetsWithDupHelper(vector<int>& arr,vector<int> &ds, vector<vector<int>> &ans, int ind=0){
        ans.push_back(ds);
        for(int i=ind; i<arr.size();i++){
            if(i!=ind && arr[i]==arr[i-1]) continue;
            ds.push_back(arr[i]);
            subsetsWithDupHelper(arr, ds, ans, i+1);
            ds.pop_back();
        }
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        subsetsWithDupHelper(nums, ds, ans);
        return ans;
    }
};