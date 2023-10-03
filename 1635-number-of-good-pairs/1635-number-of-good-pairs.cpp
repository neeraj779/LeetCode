class Solution
{
    public:
        int numIdenticalPairs(vector<int> &nums)
        {
            int count = 0;
            map<int, int> m;
            for (int i : nums)
                m[i]++;

            for (auto i : m)
                count+= (i.second * (i.second -1))/2;

            return count;
        }
};