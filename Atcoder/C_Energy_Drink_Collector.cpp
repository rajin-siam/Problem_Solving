#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    // Create a vector of pairs
    vector<pair<ll, ll>>pairs;

    ll n,m;
    cin>>n>>m;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }


    for(ll i=0;i<n;i++)
    {
        pairs.push_back(make_pair(a[i], b[i]));
    }

    sort(pairs.begin(), pairs.end());



    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(pairs[i].second<m)
        {
            ans=ans+(pairs[i].first * pairs[i].second);
            m=m-pairs[i].second;
        }
        else 
        {
            ans=ans+(pairs[i].first * m);
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}
