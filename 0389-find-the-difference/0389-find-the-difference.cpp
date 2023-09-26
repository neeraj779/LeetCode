class Solution {
public:
    char findTheDifference(string s, string t) {
        s += t;
        int c = 0;
        for(char ch:s)
            c ^=ch;
        return c;
    }
};