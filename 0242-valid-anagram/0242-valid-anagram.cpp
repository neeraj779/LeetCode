class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26] = {0};
        int n = s.length();
        int m = t.length();
        
        if(n!=m) return 0;
        
        for(int i=0; i<n; i++){
            a[s[i]-'a']++;
        }
        
        for(int i=0; i<m; i++){
            a[t[i]-'a']--;
        }
        int l = 0;
        while(l<26){
            if(a[l]!=0)
                return 0;
            l++;
        }
        return 1;
    }
};