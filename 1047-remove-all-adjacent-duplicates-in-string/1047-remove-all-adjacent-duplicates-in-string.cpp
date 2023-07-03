class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        for(auto i:s){
            if(res.empty() || i != res.back())
                res.push_back(i);
            else
                res.pop_back();
        }
        return res;
    }
};