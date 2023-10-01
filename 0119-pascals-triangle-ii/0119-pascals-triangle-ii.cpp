class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        long long ans = 1;
        v.push_back(ans);
        rowIndex += 1;
        for(int i = 1; i < rowIndex; ++i){
            ans *= rowIndex - i;
            ans /= i;
            v.push_back(ans);
        }
        return v;
    }
};