class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0;
        int pro = 1;
        int digit;
        while(n>0){
            digit = n%10;
            sum+=digit;
            pro*=digit;
            n = n/10;
        }
        return pro-sum;
        
    }
};