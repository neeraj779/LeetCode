class Solution {
public:
    string reverseWords(string s)
    {
        stack<char> st;
        string res = "";

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != ' ')
                st.push(s[i]);

            // if the current character is a space 
            // or we have reached the end of the string
            if (s[i] == ' ' || i == s.length() - 1)
            {
                while (!st.empty())
                {
                    res.push_back(st.top());
                    st.pop();
                }
                if (s[i] == ' ')
                { // if the current character is a space, append it to the result string
                    res += ' ';
                }
            }
        }
        return res;
    }
};