#include <bits/stdc++.h>
using namespace std;

string dec_to_hexa(int n)
{
    int p = 1;
    while(p <= n)
    {
        p *= 16;
    }
    p /= 16;

    string result = "";
    int digit;
    while(p > 0)
    {
        int digit = n / p;
        if(digit >= 10)
        {
            result += ('A' + digit - 9);
        }
        else
        {
            result += ('0' + digit);
        }
        n -= digit * p;
        p /= 16;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << dec_to_hexa(n) << endl;
}