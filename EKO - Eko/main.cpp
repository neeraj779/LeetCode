#include <iostream>
using namespace std;

bool isPos(int arr[], long long int n, long long int m, long long int mid)
{
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - mid > 0)
        {
            sum += arr[i] - mid;
        }
        if (sum >= m)
            return true;
    }
    return false;
}

int bin(int arr[], long long int n, long long int m)
{
    int s = 0;
    long long int mid;
    int ans;
    long long int e = 0;
    for (int i = 0; i < n; i++)
    {
        e += arr[i];
    }
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (isPos(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    long long int n;
    cin >> n;
    long long int m;
    cin >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << bin(arr, n, m);
    return 0;
}
