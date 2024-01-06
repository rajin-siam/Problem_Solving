#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    while(true)
    {
        ll x=*min_element(v.begin(),v.end());
        if(v.size()==1){cout<<x;return 0;}
        vector<ll>v2;
        n=v.size();
        
        for(ll i=0;i<n;i++)
        {
            if(v[i]%x!=0)v2.push_back(v[i]%x);
        }
        
        v.clear();
        v.shrink_to_fit();
        
        v2.push_back(x);
        n = v2.size();

        for(ll i=0;i<n;i++)
        {
            v.push_back(v2[i]);
        }
        
    }    
}