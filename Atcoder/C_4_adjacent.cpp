#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll even4=0,odd4=0,c1=0,c2=0,c3=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%4==0 && a[i]>=4)even4++;
        else if(a[i]==1)c1++;
        else if(a[i]%2==0)c2++;
        else if(a[i]==3)c3++;
        else odd4++;
    }
    if(n/2<=even4)cout<<"Yes\n";
    else {
           ll ans=n-(even4*2);
           if(ans==c2)cout<<"Yes\n";
           else cout<<"No\n";
    }
    

}