class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
              continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j]))
                return 0; 
            
            else{
                i++;
                j--;   
            }
        }
        return 1;
    }
};