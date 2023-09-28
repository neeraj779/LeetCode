class Solution {
private:
    int numOfSetBits(int n){
        int count = 0;
        bitset<32> b(n);
        for (int i = 0; i < 32; i++)
            if (b[i] == 1)
                count++;
        return count;
    }
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(numOfSetBits(i) == k) sum += nums[i];
        }
        return sum;
    }
};