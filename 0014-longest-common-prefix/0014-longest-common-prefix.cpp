class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size() - 1;
        string res = "";
        int i = 0;
        while(i<strs[0].size()){
            if(strs[0] != "" && (strs[0][i] == strs[n][i]))
                res += strs[0][i++];
            else
                break;
        }
        return res;
    }
};