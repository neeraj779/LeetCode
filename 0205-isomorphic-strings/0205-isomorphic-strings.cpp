class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        vector<int> sh(128, -1);
        vector<int> th(128, -1);
        
        for(int i=0; i<n; i++){
            if(sh[s[i]] != th[t[i]])
                return 0;
            sh[s[i]] = th[t[i]] = i;
        }
        return 1;
    }
};