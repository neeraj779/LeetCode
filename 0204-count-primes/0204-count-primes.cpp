class Solution
{
public:
//   int countPrimes(int n)
//   {
//     vector<bool> prime(n+1, true);
//     prime[0] = prime[1] = false;

//     int count = 0;

//     for (int i = 2; i < n; i++)
//     {
//       if (prime[i])
//       {
//         count++;
//         for (int j = 2 * i; j < n; j += i)
//         {
//           prime[j] = 0;
//         }
//       }
//     }
//     return count;
    int countPrimes(int n) {
    if (n < 3) {
        return 0;
    }
    vector<bool> isPrime(n, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i < n; i++) {
        if (!isPrime[i]) {
            continue;
        }
        for (int j = i * i; j < n; j += i) {
            isPrime[j] = false;
        }
    }
    return count(isPrime.begin(), isPrime.end(), true);
  }
};