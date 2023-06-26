class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        // approach 1
//         int n = nums.size();
//         for(int i=0; i<n; ++i){
//             int num  = nums[i];
//             int count = 0;
            
//             for(int j=0; j<n; ++j){
//                 if(num == nums[j])
//                     count++;
//             }
            
//             if(count==1) return num;
//         }
//         return -1;
        
        // approach 2
        int n = nums.size();
        map<int, int> m;
        for(int i=0; i<n; ++i){
            m[nums[i]]++;
        }
        
        for(auto i:m){
            if(i.second == 1)
                return i.first;
        }
        return -1;
        
        // approach 3
        // int res{0};
        // for(int i:nums){
        //     res ^= i;
        // }
        // return res;
    }
};