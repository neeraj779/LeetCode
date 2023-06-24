class Solution {
public:
    int countPrimes(int n) {
        int res{0};
        vector<bool> prime(n+1, 1);
        prime[0] = prime[1] = 0;
        
        for(int i=2; i<n; ++i){
            if(prime[i]){
                res++;
                for(int j=2*i; j<n; j+=i)
                    prime[j] = 0;
            }
        }
        return res;
    }
};