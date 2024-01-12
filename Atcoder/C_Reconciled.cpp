#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,m;
    cin>>n>>m;
    ll ans=1;
    ll x,y;
    x=min(n, m);
    y=max(n,m);
    ll rem=1e9+7;
    if(x==y || x+1==y ||y+1==x)
    {
            for(ll i=x;i>=1;i--)
            {
                ans=((ans%rem)*(i%rem)%rem);
            }
            for(ll i=y;x!=0;i--)
            {
                ans=((ans%rem)*(i%rem)%rem);
                x--;
            }
            if(n==m)
            ans=((ans%rem)*(2%rem)%rem);
    }
    else ans=0;
    cout<<ans<<endl;

}
