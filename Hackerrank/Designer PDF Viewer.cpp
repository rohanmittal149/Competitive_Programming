#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rac[26];
    string s;
    for(int i = 97; i<123; i++)
    {
        cin>>rac[i];
    }
    cin>>s;
    int l = s.size();
    int t[l];
    for(int i = 0; i<l; i++)
    {
        for(int j = 97; j<123; j++)
        {
            if(s[i] == j)
                t[i] = rac[j];
        }
    }
    int max = 0;
    for(int i = 0; i<l; i++)
    {
        if(max < t[i])
            max = t[i];
    }
    cout<<max*l;
    return 0;
}
