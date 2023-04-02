#include <bits/stdc++.h>
using namespace std;

int binToDec(int n)
{
    int index = 0, result = 0, digit;
    while(n > 0)
    {
        digit = n % 10;
        if (digit == 1)
            result += pow(2, index);
        index++;
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