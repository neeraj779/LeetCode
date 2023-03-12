class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        int copy=x;
        if(x<0)
            return 0; // negative numbers are not palindrome
        while(x!=0){
            rev = rev*10 + x%10;
            x/=10;
        }
        return copy==rev;
    }
};