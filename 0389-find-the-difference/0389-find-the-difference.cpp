class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> m;
        for(char i:t){
            m[i]++;
        }
        for(char i:s){
            m[i]--;
        }

        for(auto i:m){
            if(i.second==1) return i.first;
        }
        return '-1';
    }
};