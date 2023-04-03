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
    cout << "Array Values (from input): ";
    int max_no = arr[0], min_no = arr[0];
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        if(arr[i] > max_no)
        {
            max_no = arr[i];
        }
        if(arr[i] < min_no)
        {
            min_no = arr[i];
        }        
    }
    cout << endl;
    cout << "Max Value: " << max_no << endl;
    cout << "Min Value: " << min_no << endl;

    int arr1[] = {5, 6, 3, 1, 2};
    cout << "Array Values (from direct assignment): ";
    int len = sizeof(arr1) / sizeof(int);
    for(int i = 0; i < len; i++)
    {
        cout << arr1[i] << " ";
    }
}