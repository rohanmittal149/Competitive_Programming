#include <iostream>
using namespace std;

int main() {
	int tests;
	cin>>tests;
	int n,c,arr;
	while(tests--)
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
