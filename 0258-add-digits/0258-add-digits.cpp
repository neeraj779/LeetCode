class Solution {
public:
    int addDigits(int num) {
        while(true){
            if(num <= 9) break;
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