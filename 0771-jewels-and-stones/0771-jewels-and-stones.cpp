class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res{0};
        unordered_map<char, bool> m;
        for(auto i:jewels){
            m[i]=1;
        }
        
        int n = stones.length();
        for(int i=0; i<n; ++i){
            if(m[stones[i]])
                res++;
        }
        return res;
    }
};