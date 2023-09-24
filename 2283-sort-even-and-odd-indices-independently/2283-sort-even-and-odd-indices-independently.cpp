class Solution {
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v(n);
        vector<int> even, odd;
        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }

        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());

        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
            {
                v[i] = odd[i/2];
            }
            else
                v[i] = even[i/2];
        }
        return v;
    }
};