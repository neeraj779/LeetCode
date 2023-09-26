class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.length();
        string res;
        vector<bool> seen(26, 0);
        vector<int> lastIndex(26);
        
        for(int i = 0; i < n; ++i){
            int idx = s[i] - 'a';
            lastIndex[idx] = i;
        }

        for(int i = 0; i < n; ++i){
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