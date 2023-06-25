class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
         // approach 1
//         int n = nums.size();
//         for(int i=1; i<=n; ++i){
//             bool flag = 0;

//             for(int j=0; j<n; j++){
//                 if(nums[j] == i){
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag==0) return i;
//         }
//         return 0;
        
        
        // approach 2
//         int n = nums.size();
//         vector<int> hashTable(n+1, 0);
        
//         for(int i=0; i<n; ++i){
//             hashTable[nums[i]] = 1;
//         }
            
//         for(int i=0; i<=n; ++i){
//             if(hashTable[i] == 0) return i;
//         }
//         return 0;
        
        
        // approach 3
        // int n = nums.size();
        // int sum = n*(n+1)/2;
        // int numsSum = accumulate(nums.begin(), nums.end(), 0);
        // return sum - numsSum;
        
        // approach 4
//         int xor1{0};
//         int xor2{0};
//         int n = nums.size();
//         for(int i = 1; i<=n; ++i)
//             xor1 ^= i;
        
//         for(int i = 0; i<n; ++i)
//             xor2 ^= nums[i];
        
//         return xor1 ^ xor2;    
        
        
//             // approach 4.1
            int xor1{0};
            int xor2{0};
            int n = nums.size();

            for(int i=0; i<n; ++i){
                xor1 ^= i+1;
                xor2 ^= nums[i];
            }

        return xor1^xor2;
    }
};