class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        if(strs.size() == 1)
            return strs[0];
        int i = 0;
        int j = strs.size() - 1;
        string res = "";
        int x = 0;
        
        while(x<strs[0].size() && x<strs[j].size()){
            if(strs[0] != "" && (strs[0][x] == strs[j][x])){
                res += strs[0][x++];
            }
            
            else
                break;
        }
        return res;
    }
};