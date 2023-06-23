class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        long long int res = 0;
        int copy = x;
        while(x){
            res = res*10 + x%10;
            x /= 10;
        }
        return(res==copy);
    }
};