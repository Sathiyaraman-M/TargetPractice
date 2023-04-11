#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int N, K;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> K;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] % K == 0)
        {
            cout << arr[i] + K << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}