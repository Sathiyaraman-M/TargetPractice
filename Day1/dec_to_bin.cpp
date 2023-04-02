#include <bits/stdc++.h>
using namespace std;

int dec_to_bin(int n)
{
    int result = 0;

    // find the biggest power of 2 that is less that n
    int p = 1;
    while(p <= n)
    {
        p *= 2;
    }
    p /= 2;

    // take every multiplier of 2 from largest to smallest, to extract the binary digit and add it to the result
    while(p > 0)
    {
        int digit = n / p;
        result = result * 10 + digit;
        n -= digit * p;
        p /= 2;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << dec_to_bin(n) << endl;
}