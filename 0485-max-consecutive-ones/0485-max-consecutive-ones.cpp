class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int con{0};
        int maxi{0};
        for(int i=0; i<n; ++i){
                if(nums[i] == 1){
                    con++;
                    maxi = max(maxi, con);
                }
                else
                    con = 0;
                // if(con>maxi) maxi = con;
            }
        return maxi;
    }
};