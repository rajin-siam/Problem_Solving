#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(a%b==0)return b;
    return gcd(b,a%b);
}

int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> a;
    bool flag=false;
    for(ll i=0;i<n;i++)
    {
        ll y;
        cin>>y;
        a.push_back(y);
        if(a[i]==x)flag=true;
    }
    if(!flag)a.push_back(x);
    n=a.size();
    ll ans=0;
    ans=llabs(a[0]-a[1]);
    for(ll i=0;i<n-1;i++)
    {
        ans=gcd(ans,llabs(a[i]-a[i+1]));
    }

    cout<<ans<<endl;
}