class Solution {
public:
      bool isPalindrome(string s) {
        string temp;
        for(char i:s){
            if(isalnum(i)) temp.push_back(tolower(i));
        }
        int start = 0;
        int end = temp.length()-1;
        while(start<=end){
            if(temp[start]!=temp[end]) return false;
            start++;
            end--;
        }
        return true;   
    }
};