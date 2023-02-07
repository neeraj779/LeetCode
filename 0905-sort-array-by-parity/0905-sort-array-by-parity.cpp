class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int n = arr.size();
        vector<int> even, odd;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                even.push_back(arr[i]);
            } else {
                odd.push_back(arr[i]);
            }
        }
        even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};
