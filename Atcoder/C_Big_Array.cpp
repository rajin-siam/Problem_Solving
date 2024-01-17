#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,k;
    cin>>n>>k;
    map<ll,ll>m;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        m[x]+=y;
    }
    ll sum=0;
    auto it2=m.begin();
    ll ans= it2->first;
    for(auto it=m.begin();it!=m.end();it++)
    {
        sum+=it->second;
        if(sum<k)ans=it->first;
        else 
        {
            ans=it->first;
            break;
        }
    }
    cout<<ans<<endl;
    
}