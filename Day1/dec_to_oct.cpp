#include <bits/stdc++.h>
using namespace std;

int dec_to_oct(int n)
{
    int p = 1;
    while (p <= n)
    {
        p *= 8;
    }
    p /= 8;

    int result = 0, digit;
    while (p > 0)
    {
        digit = n / p;
        result = result * 10 + digit;
        n -= digit * p;
        p /= 8;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << dec_to_oct(n) << endl;
}