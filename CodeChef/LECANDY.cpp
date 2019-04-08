#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,c,arr;
	while(t--)
	{
	    cin>>n>>c;
    	for(int i = 0; i<n; i++)
    	{
    	    cin>>arr;;
    	    c = c - arr;
    	}
    	if(c >= 0)
    	   cout<<"Yes"<<"\n";
    	else
    	    cout<<"No"<<"\n";
	}
	return 0;
}