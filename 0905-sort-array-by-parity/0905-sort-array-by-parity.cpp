class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        vector<int> v = arr;
        int i=0;
        int j = v.size()-1;
        while(i<=j){
            if(v[i]%2 == 0) i++;
            else if(v[j]%2 != 0) j--;
            else{
                swap(v[i], v[j]);
                i++;
                j--;
            }
        }
        return v;
    }
};