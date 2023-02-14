class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = -1;
        long long int mid;
        
        while(s<=e){
            mid = s + (e-s)/2;
            long long int square = mid*mid;
            if(square == x) return mid;
            else if(square < x) {
                ans=mid; 
                s = mid+1;
            }
            else e = mid-1;
        }
        return ans;
    }
};