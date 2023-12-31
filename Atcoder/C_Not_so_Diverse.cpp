#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool customComparator(const pair<ll, ll>& a, const pair<ll,ll>& b) {
    return a.second < b.second;
}


int main()
{
    ll n,k;
    cin>>n>>k;

    ll a[n];
    map<ll,ll>m;

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    vector<pair<ll,ll>>v;

    for(auto it=m.begin();it!=m.end();it++)
    {
        v.push_back(make_pair(it->first,it->second));
    }
    
    sort(v.begin(),v.end(),customComparator);

    
    if(v.size()<=k)
    {
        cout<<0<<endl;return 0;
    }

    ll sum=0;
    for(ll i=0;i<v.size() && i<v.size()-k;i++)
    {
        sum+=v[i].second;
    }
    cout<<sum<<endl;

  //  cout<<m.size()<<endl;
}