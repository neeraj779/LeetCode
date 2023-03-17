class Solution {
public:
    int fib(int n) {
        // if(n==0) return 0;
        // if(n==1||n==2) return 1;
        // return fib(n-1)+fib(n-2);
        // if(n==0) return 0;
        // if(n==1||n==2) return 1;
        // vector<int> memo(n+1, 0);
        // memo[1] = 1;
        // memo[2] = 1;
        // for(int i=3; i<=n; i++) {
        //     memo[i] = memo[i-1] + memo[i-2];
        // }
        // return memo[n];
        double phi = (1 + sqrt(5)) / 2;
        return round((pow(phi, n) - pow(1-phi, n)) / sqrt(5));
    }
};