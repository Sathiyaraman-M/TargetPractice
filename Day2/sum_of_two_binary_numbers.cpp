#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int result = 0;
    while (n > 0)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return result;
}

int add_binary(int a, int b)
{
    int result = 0, prev_carry = 0, temp1, temp2;
    while(a > 0 && b > 0)
    {
        temp1 = a % 2;
        temp2 = b % 2;
        if(temp1 == 0 && temp2 == 0)
        {
            result = result * 10 + prev_carry;
            prev_carry = 0;
        }
        else if((temp1 == 0 && temp2 == 1) || (temp1 == 1 && temp2 == 0))
        {
            result = result * 10 + (prev_carry == 1 ? 0 : 1);
        }
        else
        {
            result = result * 10 + prev_carry; 
            prev_carry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while(a > 0)
    {
        result = result * 10 + (prev_carry == 0 ? a % 2 : (a % 2 == 0 ? 1 : 0));
        a /= 10;
    }  

    while(b > 0)
    {
        result = result * 10 + (prev_carry == 0 ? b % 2 : (b % 2 == 0 ? 1 : 0));
        b /= 10;
    }

    if(prev_carry == 1)
    {
        result = result * 10 + 1;
    }
    return reverse(result);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << add_binary(a, b) << endl;
}