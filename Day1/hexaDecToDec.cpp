#include <bits/stdc++.h>
using namespace std;

int hexDecToDec(string n)
{
    int mul = 1, result = 0;
    int size = n.size();
    for(int i = size - 1; i >= 0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            result += mul * (n[i] - '0');            
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            result += mul * (10 + n[i] - 'A');
        }
        mul *= 16;
    }
    return result;
}

int main()
{
    string n;
    cin >> n;
    cout << hexDecToDec(n) << endl;
}