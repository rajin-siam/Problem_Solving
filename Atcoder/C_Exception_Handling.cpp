#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    
    ll n;
    cin>>n;
    ll v[n];

    ll u[n],mx=0,w[n];
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v[i]=x;
        mx=max(v[i],mx);
        u[i]=mx;
    }
    mx=0;
    for(ll i=n-1;i>=0;i--)
    {
        mx=max(mx,v[i]);
        w[i]=mx;
    }

    cout<<w[1]<<endl;
    for(ll i=1;i<n-1;i++)
    {
            cout<<max(u[i-1],w[i+1])<<endl;
    }
    cout<<u[n-2]<<endl;

    
}