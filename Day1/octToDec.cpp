#include <bits/stdc++.h>
using namespace std;

int octToDec(int n)
{
    int mul = 1, result = 0, digit;
    while(n > 0)
    {
        digit = n % 10;
        result += digit * mul;
        mul *= 8;
        n /= 10;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << octToDec(n) << endl;
}