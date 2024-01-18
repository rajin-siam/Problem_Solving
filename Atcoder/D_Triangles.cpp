#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll c=0;
    sort(v.begin(),v.end());
    for(ll i=0;i<n-2;i++)
    {
        for(ll j=i+1;j<n-1;j++)
        {
            for(ll k=j+1;k<n;k++)
            {
                if(v[i]+v[j]>v[k])c++;
                else break;
            }
        }
    }
    cout<<c<<endl;
}