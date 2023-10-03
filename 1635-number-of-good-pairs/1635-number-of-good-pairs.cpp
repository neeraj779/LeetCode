class Solution
{
    public:
        int numIdenticalPairs(vector<int> &nums)
        {
            int count = 0;
            map<int, int> m;
            for (int i : nums){
                count += m[i];
                m[i]++;
            }
            return count;
        }
};