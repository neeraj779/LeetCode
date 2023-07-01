class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size() - 1;
        string res = "";
        int x = 0;
        
        while(x<strs[0].size()){
            if(strs[0] != "" && (strs[0][x] == strs[n][x]))
                res += strs[0][x++];
            else
                break;
        }
        return res;
    }
};