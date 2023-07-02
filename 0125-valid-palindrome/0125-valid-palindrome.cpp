class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char c:s){
            if(isalnum(c))
                temp.push_back(tolower(c));
        }
        
        int i = 0;
        int j = temp.length() - 1 ;
        while(i<j){
            if(temp[i++] != temp[j--])
                return 0;
        }
        return 1;
    }
};