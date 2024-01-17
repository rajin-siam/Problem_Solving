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
        if(v.size()>=x-1)
        v.insert(v.begin() +x-1, x);
        else {
            cout<<-1<<endl;return 0;
        }
    }
    ll size=v.size();
    for(ll i=0;i<size;i++)
    {
        cout<<v[i]<<endl;
    }

}