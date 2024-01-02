#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[m];
    for(ll i=0;i<m;i++)cin>>a[i];
    if(n>=m)
    {
        cout<<0<<endl;return 0;
    }
    ll b[m-1];
    sort(a,a+m);
    for(ll i=0;i<m-1;i++)
    {
        b[i]=llabs(a[i+1]-a[i]);
    }

    sort(b,b+m-1);
    ll ans=0;
    for(ll i=0;i<m-n;i++)
    {
        ans+=b[i];
    }
    cout<<ans<<endl;
}