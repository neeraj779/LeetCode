class Solution
{
    public:
        int numIdenticalPairs(vector<int> &nums)
        {
            int count = 0;
            unordered_map<int, int> m;
            for (int i : nums){
                count += m[i]; // how many times its occurred previously but 
                m[i]++;  // update the value
            }
            return count;
        }
};