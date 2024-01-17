#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    map<ll,ll>m;
    ll c=0;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        m[i]=x;
        if(m[x]==i)c++;
    }
    cout<<c<<endl;
 
}