#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,q;
    cin>>n>>q;
    ll x=1,y=0;
    vector<pair<ll,ll>>v;
    for(ll i=n;i>0;i--)
    {
        v.push_back({i,0});
    }
    for(ll i=0;i<q;i++)
    {
        ll op;
        cin>>op;
        if(op==1)
        {
            char dir;
            cin>>dir;
            if(dir=='U')y++;
            else if(dir=='D')y--;
            else if(dir=='R')x++;
            else x--;
            v.push_back({x,y});
        }
        else 
        {
            ll xx;
            cin>>xx;
            cout<<v[v.size()-xx].first<<" "<<v[v.size()-xx].second<<endl;
        }
    }
    
    

}
