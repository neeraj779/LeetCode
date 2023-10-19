class Solution {
public:
    bool backspaceCompare(string s, string t)
    {
        string s1 = "";
        string t1 = "";
        stack<char> st;
        stack<char> st1;

        for (char c : s)
        {
            if (c != '#')
                st.push(c);
            else if (!st.empty())
            {
                st.pop();
            }
        }

        for (char c : t)
        {
            if (c != '#')
                st1.push(c);
            else if (!st1.empty())
            {
                st1.pop();
            }
        }
        
        return st == st1;
    }
};