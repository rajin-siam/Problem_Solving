#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll l,r,a;
    cin>>l>>r>>a;
    ll ans=min(l,r);
    ans+=min(l,r);
    ll x=max(l,r)-min(l,r);
    if(x<=a)
    {
        ans+=(2*x);
        a=a-x;
        a=a/2;
        ans+=a;
        ans+=a;
    }
    else {
        ans+=a;
        ans+=a;
        x=x-a;
    }
    cout<<ans<<endl;
    
}