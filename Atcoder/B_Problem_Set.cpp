#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m[x]++;
    }
    ll y;
    cin>>y;
    bool ans=true;
    for(ll i=0;i<y;i++)
    {
        ll x;cin>>x;
        if(m[x]!=0)
        {
            m[x]--;
        }
        else {ans=false;break;}
    }
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
}