class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len = 0, i = 0;
        for(char ch : t){
            if(ch == s[i]){
                i++;
                len++;
            }
        }
        return len == s.size()? 1:0;
    }
};