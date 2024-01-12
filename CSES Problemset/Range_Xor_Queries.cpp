#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,q;
    cin>>n>>q;
    ll arr[n+1];
    for(ll i=1;i<=n;i++)
    cin>>arr[i];

    ll xor_array[n+1]={0};
    for(ll i=1;i<=n;i++)
    {
        xor_array[i]=xor_array[i-1]^arr[i];
    }
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        int ans = (xor_array[y]) ^ (xor_array[x-1]);
        cout<<ans<<endl;
    }


}