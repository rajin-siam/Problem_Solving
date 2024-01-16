#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    map<ll,ll>m1;
    map<ll,ll>m2;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
        m1[x]++;
    }
    if(m1.size()==1 && m1[0]>0)cout<<"Yes\n";
    else 
    {
        auto it=m1.begin();
        m2[it->first]++;
        ll x=it->first;
        it++;
        m2[it->first]++;
        ll y=it->first;
        for(ll i=0;i<n-2;i++)
        {
            ll z=x^y;
            m2[z]++;
            x=y;
            y=z;
        }
        if(m2==m1)cout<<"Yes\n";
        else cout<<"No\n";
    }

    


    
}