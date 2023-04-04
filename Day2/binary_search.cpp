#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    sort(arr, arr + n);

    int l = 0, r = n - 1, m;
    while(l <= r)
    {
        m = (l + r) / 2;
        if(arr[m] == key)
        {
            cout << "Index: " << m << endl;
            return 0;
        }
        else if(arr[m] < key)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << "Search Key not found!" << endl;
}