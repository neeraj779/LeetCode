class Solution
{
public:
    int minimumTime(int n, vector<vector<int>> &mat, vector<int> &time)
    {
        vector<vector<int>> adj(n + 1);
        for (auto &edge : mat)
        {
            int prev = edge[0], next = edge[1];
            adj[next].push_back(prev);
        }

        vector<int> dp(n + 1, -1);
        for (int i = 1; i <= n; i++)
        {
            if (dp[i] == -1)
            {
                dp[i] = calculateMinTime(i, adj, time, dp);
            }
        }

        return *max_element(dp.begin(), dp.end());
    }

private:
    int calculateMinTime(int course, vector<vector<int>> &adj, vector<int> &time, vector<int> &dp)
    {
        if (adj[course].empty())
        {
            return time[course - 1];
        }

        int minTime = 0;
        for (int prereq : adj[course])
        {
            if (dp[prereq] == -1)
            {
                dp[prereq] = calculateMinTime(prereq, adj, time, dp);
            }
            minTime = max(minTime, dp[prereq]);
        }

        return minTime + time[course - 1];
    }
};