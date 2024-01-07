#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n],sum=0;
    ll b[n]={0};
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        b[i]=sum;
    }
 //   for(ll i=0;i<n;i++)cout<<b[i]<<endl;
    ll x=LONG_LONG_MAX;
    for(ll i=0;i<n-1;i++)
    {
 //   cout<<b[i]<<"\t"<<sum-b[i]<<"\t"<<llabs(b[i]-(sum-b[i]))<<endl;
        x=min(llabs(b[i]-(sum-b[i])),x);
    }
    cout<<x<<endl;


}