#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll l=s.length();
    ll idx=0;
    ll ans=0,cnt =0;
    for(ll i=i=0;i<l;i++)
    {
        if(s[i]=='W')
        {
            cnt++;
            ans+=(i-cnt)+1;      
        }
    }
    cout<<ans<<endl;
}