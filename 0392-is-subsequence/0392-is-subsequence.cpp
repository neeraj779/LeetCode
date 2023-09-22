class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len = 0;
        int i = 0;
        for(char c:t){
            if(c == s[i]) i++, len++;
        }
        return len==s.size()? 1:0;
    }
};