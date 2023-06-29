class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26] = {0};
        int b[26] = {0};
        int n = s.length();
        int m = t.length();
        
        if(n!=m) return 0;
        
        for(int i=0; i<n; i++){
            a[s[i]-'a']++;
        }
        
        for(int i=0; i<m; i++){
            b[t[i]-'a']++;
        }
        
        return equal(a, a+26, b);
    }
};