#include <bits/stdc++.h>
using namespace std;

int binToDec(int n)
{
    int mul = 1, result = 0, digit;
    while(n > 0)
    {
        digit = n % 10;
        result += mul * digit;
        mul *= 2;
        n /= 10;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << binToDec(n) << endl;
}