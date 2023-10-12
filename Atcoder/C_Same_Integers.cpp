#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];

    sort(a,a+3);
    ll x,y;

    x = (a[2]-a[0])/2;
    y = (a[2]-a[1])/2;
    ll ans= x+y;
    a[0]=a[0]+(x*2);
    a[1]=a[1]+(y*2);
   // cout<<a[0]<<"\t"<<a[1]<<endl;
    ll xx=a[2]-1;
    ll c=0;
    for(ll i=0;i<2;i++)
    {
        if(a[i]==xx)c++;
    }

    if(c==1)ans+=2;
    else if(c==2)ans++;
    cout<<ans<<endl;
}