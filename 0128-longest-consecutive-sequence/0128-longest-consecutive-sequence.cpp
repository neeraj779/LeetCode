class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // method 1
        // int n = nums.size();
        // if(!n) return 0;
        // int longest = 1;
        // for(int i = 0; i < n; ++i){
        //     int x = nums[i];
        //     int count = 0;
        //     while(find(nums.begin(), nums.end(), x) != nums.end()){
        //         count++;
        //         x++;
        //     }
        //     longest = max(longest, count);
        // }
        // return longest;

        // method 2
        // int n = nums.size();
        // if(n == 0) return 0;
        // sort(nums.begin(), nums.end());
        // int longest = 1, lastSmaller = INT_MIN, count = 0;
        // for(int i = 0; i < n; ++i){
        //     if(nums[i] - 1 == lastSmaller){
        //         count++;
        //         lastSmaller = nums[i];
        //     }
        //     else if(nums[i] != lastSmaller){
        //         count = 1;
        //         lastSmaller = nums[i];
        //     }
        //     longest = max(longest, count);
        // }
        // return longest;

        //method 3
        int n = nums.size();
        if(!n) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int i:nums)
            st.insert(i);
        
        for(auto it:st){
            if(st.find(it - 1) == st.end()){
                int x = it;
                int count = 0;
                while(st.find(x) != st.end()){
                    x++;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};