class Solution
{
    public:
        int numIdenticalPairs(vector<int> &nums)
        {
            int count = 0;
            map<int, int> m;
            for (int i = 0; i < nums.size(); ++i)
            {
                m[nums[i]]++;
            }

            for (auto i: m)
            {
                int x = i.second;
                count+= (x * (x -1))/2;
            }
            
            return count;
        }
};