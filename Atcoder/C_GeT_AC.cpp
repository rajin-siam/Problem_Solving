#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll l,q;
    cin>>l>>q;
    string s;
    cin>>s;
    ll cnt=0;
    ll a[l]={0};
    for(ll i=0;i<l-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='C')
        {
            cnt++;a[i+1]=cnt;
        }
    }
    ll cnt2=0;
    for(ll i=0;i<l;i++)
    {
        if(cnt2<a[i])cnt2=a[i];
        a[i]=cnt2;
        
    }

    for(ll i=0;i<q;i++)
    {
        ll x,y;
        cin>>x>>y;
        cout<<a[y-1]-a[x-1]<<endl;
    }
        
}