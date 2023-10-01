class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length() > k){ 
            string temp;
            int j = 0;

            while(j < s.length()){ 
                int sum = 0;
                for(int i = 0; i < k && j < s.length(); ++i){
                    sum += s[j] - '0';
                    ++j;
                }
                temp += to_string(sum);
            }
            s = temp;
        }
        return s;
    }
};