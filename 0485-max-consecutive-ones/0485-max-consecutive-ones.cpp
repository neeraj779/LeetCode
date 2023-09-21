class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0, countOnes = 0;
        for(int i:nums){
            if(i == 1){
                countOnes++;
                maxOnes = max(maxOnes, countOnes);
            }
            else
                countOnes = 0;
        }
        return maxOnes;
    }
};