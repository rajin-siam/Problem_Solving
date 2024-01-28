#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n;
    cin>>n;
    ll t=n;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    auto comparator = [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.first != b.first) {
            return a.first > b.first; 
        } else {
            return a.second < b.second; 
        }
    };
    bool ans=false;
    sort(v.begin(),v.end(),comparator);
    for(ll i=0;i<n-1;i++)
    {
        if(v[i].second<v[i+1].second){ans=true;break;}
        else {
            ans=false;
        }
    }
    cout<< ((ans) ? "Happy Alex\n" : "Poor Alex\n");
}