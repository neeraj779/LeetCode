class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int l= -1;
        int h =-1;
        int start=0;
        int end=nums.size()-1;
        int mid = start + (end-start)/2;
        
        while(start<=end){
            if(nums[mid]==target) {
                l = mid;
                end = mid-1;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else{
                end= mid-1;
            }
            mid = start + (end-start)/2;
        }
        
        start=0;
        end=nums.size()-1;
        mid = start + (end-start)/2;
        
        
         while(start<=end){
            if(nums[mid]==target) {
                h = mid;
                start = mid+1;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else{
                end= mid-1;
            }
            mid = start + (end-start)/2;
        }
        v.push_back(l);
        v.push_back(h);
        return v;
    }
};