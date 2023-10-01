class Solution {
private:
    int nCr(int n, int r){
        int ans  = 1;
        for(int i = 0; i < r; ++i){
            ans *= (n - i);
            ans /= i + 1;
        }
        return ans;
    }

    vector<int> genrateRow(int n){
        vector<int> v;
        long long ans = 1;
        v.push_back(ans);
        for(int i = 1; i < n; ++i){
            ans *= n - i;
            ans /= i;
            v.push_back(ans);
        }
        return v;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i = 1; i <= numRows; ++i){
            v.push_back(genrateRow(i));
            // vector<int> temp;
            // for(int j = 1; j <= i; ++j){
            //     temp.push_back(nCr(i-1, j-1));
            // }
            // v.push_back(temp);
        }
        return v;
    }
};