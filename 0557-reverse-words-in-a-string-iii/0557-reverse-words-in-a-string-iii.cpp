class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string res = "";
        for(int i = 0; i < s.length(); ++i){
            if(s[i] != ' '){
                st.push(s[i]);
            }

            if(s[i] == ' ' || i == s.length() - 1){
                while(!st.empty()){
                    res.push_back(st.top());
                    st.pop();
                }
                if(s[i] == ' ')
                    res += ' ';
            }
        }
        return res;
    }
};