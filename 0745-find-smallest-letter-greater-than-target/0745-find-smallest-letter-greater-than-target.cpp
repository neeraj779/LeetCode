class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int low = 0, high = n-1, mid;
        int ans = -1;
        while(low<=high){
            mid = low + (high - low)/2;
            if(letters[mid] > target){
                ans = mid;
                high = mid - 1;
            }

            else low = mid + 1;
        }
        return ans!=-1? letters[ans]: letters[0];
    }
};