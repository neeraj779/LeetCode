class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k) {
            string newS;
            int i = 0;
            
            while (i < s.length()) {
                int sum = 0;
                for (int j = 0; j < k && i < s.length(); j++) {
                    sum += (s[i] - '0');
                    i++;
                }
                newS += to_string(sum);
            }
            
           s = newS;
        }
        return s;
    }
};