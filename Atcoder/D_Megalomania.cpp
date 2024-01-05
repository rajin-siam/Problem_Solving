#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++)
    {
        v.push_back({b[i], a[i]});
    }
    sort(v.begin(),v.end());
    ll sum=0;
    bool ans=true;
    
    for(ll i=0;i<n;i++)
    {
        sum+=v[i].second;
        if(v[i].first>=sum)continue;
        else {ans=false; break;}
    }
    if(ans)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}

