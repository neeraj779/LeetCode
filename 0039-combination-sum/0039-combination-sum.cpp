class Solution
{
private:
  void combination(vector<int> &candidates, int target, vector<vector<int>> &arr, vector<int> &ds, int ind)
  {

    if (ind == candidates.size())
    {
      if (target == 0)
      {
        arr.push_back(ds);
      }
      return;
    }
      
    if(candidates[ind]<=target){
    ds.push_back(candidates[ind]);
    combination(candidates, target-candidates[ind], arr, ds, ind);
    ds.pop_back();
    }
    combination(candidates, target, arr, ds, ind + 1);
  }

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target)
  {
    vector<vector<int>> arr;
    vector<int> ds;
    combination(candidates, target, arr, ds, 0);
     
      return arr;
  }
};