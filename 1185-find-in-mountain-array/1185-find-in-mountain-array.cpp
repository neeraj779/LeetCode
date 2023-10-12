/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
private:
    int findPeakElement(MountainArray &mountainArr)
    {
        int n = mountainArr.length();
        if (n == 1)
            return 0;
        if (mountainArr.get(0) > mountainArr.get(1))
            return 0;
        if (mountainArr.get(n - 1) > mountainArr.get(n - 2))
            return n - 1;

        int low = 1, mid, high = n - 2;

        while (low <= high)
        {
            mid = low + (high - low) / 2;
            int ele = mountainArr.get(mid);
        
            if (ele > mountainArr.get(mid - 1) && ele > mountainArr.get(mid + 1))
                return mid;

            else if (ele > mountainArr.get(mid - 1))
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    int bs(int low, int high, MountainArray &mountainArr, int target, char order)
    {
        int mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            int ele = mountainArr.get(mid);
            if (ele == target)
                return mid;

            else if (ele < target)
                if (order == 'a')
                    low = mid + 1;
                else
                    high = mid - 1;

            else if (order == 'a')
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }

public:
    int findInMountainArray(int target, MountainArray &mountainArr)
    {
        int ans = -1;
        int peakIndex = findPeakElement(mountainArr);
        ans = bs(0, peakIndex, mountainArr, target, 'a');
        if (ans == -1)
            ans = bs(peakIndex + 1, mountainArr.length() - 1, mountainArr, target, 'd');
        return ans;
    }
};