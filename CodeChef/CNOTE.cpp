#include <iostream>
using namespace std;

int main() {
	int t;
	int x,y,k,n;
	int p[1000000],c[1000000];
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    cin>>y;
	    cin>>k;
	    cin>>n;
	    for(int i = 0; i<n; i++)
	    {
	        cin>>p[i]>>c[i];
	    }
	    int f = 0;
	    for(int i = 0; i<n; i++)
	    {
	        if(p[i] >= (x-y) && c[i] <= k)
	            f++;
	    }
	    if(f == 0)
	        cout<<"UnluckyChef"<<"\n";
	    else
	        cout<<"LuckyChef"<<"\n";
	}
	return 0;
}
