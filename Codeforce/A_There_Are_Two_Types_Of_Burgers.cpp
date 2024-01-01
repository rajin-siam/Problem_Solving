#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll n,b,p;
        ll h,c;
        cin>>n>>b>>p>>h>>c;
        n=n/2;
        ll mx1,mx2,mx1p,mx2p;
        if(h>c)
        {
            mx1=b;
            mx2=p;
            mx1p=h;
            mx2p=c;
        }
        else {
            mx1=p;
            mx2=b;
            mx1p=c;
            mx2p=h;
        }
        ll ans=0;
        if(n<=mx1)
        {
            ans = n*mx1p;
        }
        else 
        {
            ans = mx1*mx1p;
            ans+=min(mx2,(n-mx1))*mx2p;
        }
        cout<<ans<<endl;
    }
}