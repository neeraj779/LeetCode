class Solution {
private:

void helper(vector<int>& nums, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right])
            temp.push_back(nums[left++]);
        else
            temp.push_back(nums[right++]);
    }

    while(left <= mid){
        temp.push_back(nums[left++]);
    }

    while(right <= high){
        temp.push_back(nums[right++]);
    }

    for(int i = low; i <= high; ++i){
        nums[i] = temp[i-low];
    }
}

void solve(vector<int>& nums, int low, int high){
    if(low >= high) return;
    int mid = (low + high)/2;
    solve(nums, low, mid);
    solve(nums, mid+1, high);
    helper(nums, low, mid, high);
}

public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> res(nums);
        solve(res, 0, res.size()-1);
        return res;
    }
};
