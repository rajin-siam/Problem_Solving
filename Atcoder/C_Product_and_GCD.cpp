#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,p;
    cin>>n>>p;
    ll ans=1;
    if(n==1)
    {
        cout<<p<<"\n";return 0;
    }
    for(ll i=2;i*i<=p;i++)
    {
        ll cnt=0;
        while(p%i==0)
        {
            p=p/i;
            cnt++;
        }
        if((cnt/n)>0)
        {
           // printf("%lld\n",cnt/n);
           for(ll j=0;j<(cnt/n);j++)
           {
                ans = ans * i;
           }
            
        }
    }
    cout<<ans<<endl;
    
}