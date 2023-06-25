class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        int n = nums.size();
        
        if(n == 1) return;
        if(n<k) k =k%n;
        
        for(int i=0; i<n-k; ++i)
            v.push_back(nums[i]);
        
        
        int d = 0;
        for(int i=n-k; i<n; ++i){
            nums[d++] =nums[i];
        }
        
        
        int x=0;
        for(int i=k; i<n; i++){
            nums[i] = v[x++];
        }
        
    }
};