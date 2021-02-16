#include <iostream>
using namespace std;

int main() {
	int test;
	int x,y,k,n;
	int p[1000000],c[1000000];
	cin>>test;
	while(test--)
	{
	    cin>>x;
	    cin>>y;
	    cin>>k;
	    cin>>n;
	    for(int i = 0; i<n; i++)
	    {
	        cin>>p[i]>>c[i];
	    }
	    int g = 0;
	    for(int i = 0; i<n; i++)
	    {
	        if(p[i] >= (x-y) && c[i] <= k)
	            g++;
	    }
	    if(g == 0)
	        cout<<"UnluckyChef"<<"\n";
	    else
	        cout<<"LuckyChef"<<"\n";
	}
	return 0;
}
