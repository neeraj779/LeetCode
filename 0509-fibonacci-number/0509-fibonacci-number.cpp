class Solution {
public:
    int fib(int n) {
        static vector<int> memo(3, 0);
        if(n==0) return 0;
        if(n==1||n==2) return 1;
        
        if(memo.size() <= n) { // memo is too small, expand it
            memo.resize(n+1, 0);
        }
        
        if(memo[n] == 0) { // n-th Fibonacci number not computed yet
            memo[n] = fib(n-1) + fib(n-2); // compute n-th Fibonacci number recursively
        }
        return memo[n];
    }
};