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
	    int f = 0;
	    for(int j = 0; j<n; j++)
	    {
	        if(p[j] >= (x-y) && c[j] <= k)
	            f++;
	    }
	    if(f == 0)
	        cout<<"UnluckyChef"<<"\n";
	    else
	        cout<<"LuckyChef"<<"\n";
	}
	return 0;
}
