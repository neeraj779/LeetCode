class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        int evenIndex = 0 ;
        int odeIndex = 1;
        vector<int> v(n);
        vector<int> odd;
        vector<int> even;
        for(int i = 0; i<n; ++i){
            if(i&1) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }

        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());

        int x = 0;
        int y = 0;
        for(int i = 0; i < n; ++i){
            if(i&1){
                v[i] = odd[x++];
            }
            else v[i] = even[y++];
        }
        return v;
    }
};