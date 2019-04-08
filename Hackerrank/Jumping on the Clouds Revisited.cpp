#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i = 0;
    cin>>n>>k;
    int arr[n];
    int p = 100;
    for(int j = 0; j<n; j++)
    {
        cin>>arr[j];
    }
    do
    {   
        if(arr[(i+k)%n] == 0)
        {
            p -= 1;
           
        }
        else
        {
            p -= 3;
            
        }
        i = (i+k)%n;
    }while(i != 0);
    cout<<p;
}
