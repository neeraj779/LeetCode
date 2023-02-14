#include <iostream>
using namespace std;
int SqrtInt(int x)
{

    int s = 0;
    int e = x;
    int ans = -1;
    long long int mid;

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == x)
            return mid;
        else if (square < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

double SqrtPre(int x, int precision, int ansInt)
{
    double factor = 1;
    double ans = ansInt;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < x; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int x;
    cin >> x;
    int ansInt = SqrtInt(x);
    cout << SqrtPre(x, 3, ansInt);
    return 0;
}