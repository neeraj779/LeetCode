class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1, high = num, mid;
        
        while(low<=high){
            mid = low + (high - low)/2;
            long long square = 1LL*mid*mid;
            if(square == num) return 1;
            else if(square < num) low = mid + 1;
            else high = mid-1;
        }
        return 0;
    }
};