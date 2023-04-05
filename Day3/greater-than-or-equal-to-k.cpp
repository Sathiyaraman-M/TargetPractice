#include <bits/stdc++.h>
 
using namespace std;

/*------------------------
For a given list of N integers, print "yes" if every element is greater than or equal to K, else print "no"
Input:
N
List
K
Output:
yes/no
--------------------------*/

int main(int argc, char** argv)
{
    int n, k;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < k)
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}