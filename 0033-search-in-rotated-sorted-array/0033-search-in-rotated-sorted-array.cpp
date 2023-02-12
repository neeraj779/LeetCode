class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int s = 0;
        int pivot;
        int e = nums.size() - 1;
        int mid;
        while (s < e)
        {
            mid = s + (e - s) / 2;
            if (nums[mid] >= nums[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
        }
        
        
        pivot = s;
        int ans;
        if (target >= nums[pivot] && target <= nums[nums.size() - 1])
        {
            ans = bs(nums, pivot,  nums.size() - 1, target);
        }
        else
        {
            ans = bs(nums, 0, pivot - 1, target);
        }
        return ans;
    }

private:
    int bs(vector<int> &nums, int s, int e, int target)
    {
        int mid;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (nums[mid]==target)
                return mid;
            if (target > nums[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return -1;
    }
};