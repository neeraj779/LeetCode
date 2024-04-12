class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> st;
        st.push(-1);
        int max_length = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if (st.empty())
                    st.push(i);
                else
                    max_length = max(max_length, i - st.top());
            }
        }

        return max_length;
    }
};