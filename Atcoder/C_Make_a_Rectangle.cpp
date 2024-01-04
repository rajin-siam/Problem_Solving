#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll>m;
    ll mx1=0,mx2=0;
    ll xx=0,ans=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m[x]++;
        if(m[x]>1)
        {
            if(mx1<x)
            {
                mx2=mx1;
                mx1=x;
            }
            else if(mx2<x && mx1!=x)
            {
                mx2=x;
            }
        }
        ans=max(ans,mx1*mx2);
        if(m[x]==4)
        {
            ans=max(x*x,ans);
        }
        
    }
    cout<<ans<<endl;

}

