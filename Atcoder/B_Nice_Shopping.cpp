#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,d;
    cin>>a>>b>>d;
    ll x[a],y[b];

    for(ll i=0;i<a;i++)cin>>x[i];
    for(ll i=0;i<b;i++)cin>>y[i];
    
    ll xx,yy;
    xx=*min_element(x,x+a);
    yy=*min_element(y,y+b);

    ll xxx;
    ll p,q,r=0;
    ll ans=INT64_MAX;
    for(ll i=0;i<d;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
            r=w;
            p=u;q=v;
            xxx=min(xx+yy,x[p-1]+y[q-1]-r);
            ans=min(ans,xxx);
    }

    cout<<ans<<endl;
}