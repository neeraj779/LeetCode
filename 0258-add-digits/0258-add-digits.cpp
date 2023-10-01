class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
            int res = 0;
            while(num){
                int d = num % 10;
                res += d;
                num /= 10;
            }
            num = res;
        }
        return num;
    }
};