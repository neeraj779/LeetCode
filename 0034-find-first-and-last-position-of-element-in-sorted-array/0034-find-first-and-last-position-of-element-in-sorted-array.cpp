class Solution
{
private:
    int bs(vector<int> &nums, int target, bool type){
        int s=0, e=nums.size()-1, mid;
        int ans = -1;
        while(s<=e){
            mid = s + (e-s)/2;
            if(nums[mid]==target){
                ans = mid;
                if(type == 0)
                    e = mid-1;
                else
                    s = mid+1;
            }
            else if(nums[mid]<target)
                s = mid+1;
            else
                e = mid-1;
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        // int f{-1}, l{-1};
        // int n = nums.size();

        // for (int i = 0; i < n; ++i)
        // {
        //     if (nums[i] == target)
        //     {
        //         if (f == -1)
        //             f = i;
        //         l = i;
        //     }
        // }
        // return {f, l};

        // int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        
        // int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        
        // if (first == nums.size() || nums[first] != target)
        //     return {-1, -1};
        
        // return {first, last - 1};
        return {bs(nums, target, 0), bs(nums, target, 1)};
    }
};