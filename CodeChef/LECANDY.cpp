#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	int n,c,arr;
	while(test--)
	{
	    cin>>n>>c;
    	for(int j = 0; j<n; j++)
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
