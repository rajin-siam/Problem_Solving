#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    int x = (n/2); 
    vector<ll>vv;
    for(ll i=0;i<n;i++)vv.push_back(v[i]);

    sort(v.begin(),v.end());


    for(ll i=0;i<n;i++)
    {
        ll xx=vv[i];
        ll nth=v[x-1];
        if(xx<=nth)cout<<v[x]<<endl;
        else cout<<v[x-1]<<endl;

    }
    return 0;
}

