class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> visited(m, 0);
        vector<int> v;

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(nums1[i] == nums2[j] && visited[j] == 0){
                    v.push_back(nums1[i]);
                    visited[j] = 1;
                    break;
                }
            }
        }
        return v;
    }
};