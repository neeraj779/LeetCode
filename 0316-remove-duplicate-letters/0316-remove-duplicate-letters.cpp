class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        string res;
        vector<bool> seen(26, false);
        vector<int> lastIndex(26);

        for(int i = 0; i < n; ++i){
            char ch = s[i] - 'a';
            lastIndex[ch] = i;
        }

        for(int i  = 0; i < n; ++i){
            char ch = s[i];
            int idx = ch - 'a';
            if(seen[idx]) continue;
            while(!res.empty() && res.back() > ch && lastIndex[res.back() - 'a'] > i){
                seen[res.back() - 'a'] = false;
                res.pop_back();
            }

            res.push_back(ch);
            seen[idx] = true;
        }
        return res;
    }
};