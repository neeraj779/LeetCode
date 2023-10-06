class Solution {
private:
    int solve(int n, vector<int> &dp){
        if(n==1) return 1;
        int maxProd{INT_MIN}, prod;

        if(dp[n] != -1) return dp[n];

        for(int i = 1; i < n; ++i){
            prod = i * max(n-i, solve(n-i, dp));
            maxProd = max(maxProd, prod);
        }

        dp[n] = maxProd;
        return dp[n];
    }

public:
    int integerBreak(int n) {
        vector<int> dp(59, -1);
        return solve(n, dp);
    }
};