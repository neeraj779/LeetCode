class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v = {-1,-1};
        int start = 0;
        int end=nums.size()-1;        
        
        int l = search(nums, start, end, target, true);
        int h = search(nums, start, end, target, false);
        v[0] = l;
        v[1] = h;
        return v;
    }
    
private:
    int search(vector<int>& nums, int start, int end, int target, bool flag){
        int result = -1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(nums[mid]==target) {
                result = mid;
                if(flag) end = mid-1;
                else start = mid+1;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else{
                end= mid-1;
            }
            mid = start + (end-start)/2;
        }
        return result;
    }
};