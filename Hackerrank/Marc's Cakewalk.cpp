#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,r = 0;
    cin>>n;
    long int arr[n];
    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
    } 
    sort(arr, arr+n, greater<int>());
    for(i = 0; i<n; i++)
    {
        r = r + pow(2,i)*arr[i];
    } 
    cout<<r;
    return 0;
}
