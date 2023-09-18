class Solution {
private:
int func(vector<int>& piles, int i, int h){
    long long int ans = 0;
    for(int v:piles){
        // ans += (v + i - 1) / i; 
        ans += ceil((double)v / (double)i);
        if(ans > h) return 0;
    }
    return 1;
}

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, mid;
        int high = *max_element(piles.begin(), piles.end());
        // for(int i=1; i<=n; ++i){
        //     if(func(piles, i, h)) return i;
        // }
        while(low<=high){
            mid = low + (high - low)/2;
            int res = func(piles, mid, h);
            if(res == 1) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};