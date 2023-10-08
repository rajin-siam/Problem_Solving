#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,q;
    
    cin>>n>>k>>q;
    ll y=k-q;
    ll a[n];
    fill(a,a+n,k-q);



    for(ll i=0;i<q;i++)
    {
        ll x;
        cin>>x;
        a[x-1]++;
    }


    for(ll i=0;i<n;i++)
    {
        if(a[i]<=0)cout<<"No\n";
        else cout<<"Yes\n";
    }

    
}