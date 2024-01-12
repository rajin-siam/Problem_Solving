#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,q;
    cin>>n;
    ll a[n+1];
    ll preSum[n+1]={0};
    for(ll i=1;i<=n;i++)cin>>a[i];

    cin>>q;
    for(ll i=1;i<=n;i++)preSum[i]=preSum[i-1]+a[i];

    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<preSum[y+1]-preSum[x]<<endl;
    }
}