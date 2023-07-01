class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string s1 = strs[0];
        int len = s1.size();
        
        for(int i=1; i<n; ++i){
            int j = 0;
            while(j<s1.size() && j<strs[i].size() && s1[j] == strs[i][j])
                j++;
            len = min(len, j);
        }
        return strs[0].substr(0, len);
        
        // sort(strs.begin(), strs.end());
        // for(auto i:strs)
        //     cout<<i<<" ";
        // int n = strs.size() - 1;
        // string res = "";
        // int i = 0;
        // while(i<strs[0].size() && i<strs[n].size()){
        //     if(strs[0] != "" && (strs[0][i] == strs[n][i]))
        //         res += strs[0][i++];
        //     else
        //         break;
        // }
        // return res;
    }
};