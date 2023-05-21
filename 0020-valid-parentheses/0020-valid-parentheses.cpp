class Solution
{
private:
    bool is_opening(char ch)
    {
        return ch == '(' || ch == '{' || ch == '[';
    }

    bool matches(char opening, char closing)
    {
        if (opening == '(' && closing == ')')
            return true;
        if (opening == '{' && closing == '}')
            return true;
        if (opening == '[' && closing == ']')
            return true;
        return false;
    }

public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            // if opening brackets push to stack
            if (is_opening(ch))
                st.push(ch);
            
            // if closing brackets match the top and pop
            else
            {
                if (!st.empty())
                {
                    char opening = st.top();
                    if (matches(opening, ch))
                        st.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }

        return st.empty();
    }
};