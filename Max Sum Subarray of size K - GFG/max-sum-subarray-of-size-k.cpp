//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i = 0;
        int j = 0;
        int n = Arr.size();
        long int sum{0};
        long int mMax = INT_MIN;
        while(j<n){
            sum += Arr[j];
            if(j-i+1<K)
                j++;
            else if(j-i+1 == K){
                mMax = max(mMax, sum);
                sum -= Arr[i];
                i++;
                j++;
            }
        }
        return mMax;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends