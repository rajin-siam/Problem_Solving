#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    string s,t;
    cin>>s>>t; 
    ll c=0;
    s=s.substr(0,n);
    t=t.substr(0,n);
    if(s==t){cout<<n<<endl;return 0;}
    ll x=1;
    for(ll i=0;i<n;i++)
    {
        if(s.substr(s.length()-1-i,x)==t.substr(0,x))c=x;
        x++;
    }
    cout<<n+n-c<<endl;
}