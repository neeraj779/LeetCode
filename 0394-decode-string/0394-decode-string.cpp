class Solution {
public:
    string decodeString(string s)
    {
        int length = s.length();
        string decodedString = "";

        for (int i = 0; i < length; ++i)
        {
            if (s[i] != ']')
            {
                // Append character to the decoded string
                decodedString.push_back(s[i]);
            }
            else
            {
                string str = "";
                
                // Extract characters within square brackets
                while (!decodedString.empty() && decodedString.back() != '[')
                {
                    str.push_back(decodedString.back());
                    decodedString.pop_back();
                }

                decodedString.pop_back(); // Remove '['
                reverse(str.begin(), str.end());

                string numStr = "";

                // Extract the number before the square brackets
                while (!decodedString.empty() && isdigit(decodedString.back()))
                {
                    numStr.push_back(decodedString.back());
                    decodedString.pop_back();
                }

                reverse(numStr.begin(), numStr.end());
                int repetitionCount = stoi(numStr);

                // Repeat the str and add it to the decoded string
                while (repetitionCount)
                {
                    decodedString += str;
                    repetitionCount--;
                }
            }
        }
        return decodedString;
    }

};