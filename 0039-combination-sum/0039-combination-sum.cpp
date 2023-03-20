class Solution
{
private:
  void combination(vector<int> &candidates, int target, vector<vector<int>> &result, vector<int> &current_combination, int index)
  {
    // If the index is equal to the size of the candidates array,
    // and the target is zero, then we have found a valid combination
    if (index == candidates.size())
    {
      if (target == 0)
      {
        result.push_back(current_combination);
      }
      return;
    }

    // If the current candidate is less than or equal to the target,
    // then we can add it to the current combination
    if (candidates[index] <= target)
    {
      current_combination.push_back(candidates[index]);
      combination(candidates, target - candidates[index], result, current_combination, index);
      current_combination.pop_back();
    }
    // We can also skip the current candidate and move on to the next one
    combination(candidates, target, result, current_combination, index + 1);
  }

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target)
  {
    vector<vector<int>> result;
    vector<int> current_combination;
    combination(candidates, target, result, current_combination, 0);

    return result;
  }
};