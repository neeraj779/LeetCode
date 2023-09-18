class Solution {
public:
    int mySqrt(int x) {
       int low = 0, high = x, mid, ans = -1;
    
       while(low<=high){
            mid = low + (high - low)/2;
            long long int square = 1LL*mid*mid;
            if(square == x) return mid;
            else if(square < x){
                ans = mid;
                low = mid + 1;
            }
            else high = mid-1;
       }
       return ans;
    }
};