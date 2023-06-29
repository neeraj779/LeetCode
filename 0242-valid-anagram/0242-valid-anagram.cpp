class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        int n1 = s.length();
        int n2 = t.length();
        if(n1!=n2) return 0;
        
        for(int i=0; i<n1; i++){
            m[s[i]]++;
        }
        
        for(int i=0; i<n2; i++){
            m[t[i]]--;
        }
       
        for(auto i:m){
            if(i.second != 0)
                return 0;
        }
        return 1;
    }
};