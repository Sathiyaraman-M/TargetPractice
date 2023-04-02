#include <bits/stdc++.h>
using namespace std;

bool check_pythagorean_triplets(int x, int y, int z)
{
    int a, b, c;
    a = max(x, max(y, z));
    if(a == x)
    {
        b = y;
        c = z;
    }
    else if(a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        y = z;
    }
    return a * a == b * b + c * c;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(check_pythagorean_triplets(x, y, z))
    {
        cout << "Pythagorean Triplets";
    }
    else
    {
        cout << "Not Pythagorean Triplets";
    }
}