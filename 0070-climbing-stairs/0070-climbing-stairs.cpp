class Solution {
private:
int solve(int n, int i, vector<int> dp){
    if(i==n)
        return 1;
    
    if(i>n)
        return 0;

    if(dp[i] != -1)
        return dp[i];
    
    dp[i] = solve(n, i+1, dp) + solve(n, i+2, dp);
    
    return dp[i];
}

int solve2(int n, int i){
    vector<int> dp(n+1, -1);
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i= 1; i<=n; ++i){
        dp[i] = dp[i-1];
        if(i>1)
            dp[i] += dp[i-2];
    }
    return dp[n];
}
public:
    int climbStairs(int n) {
        return solve2(n, 0);
    }
};