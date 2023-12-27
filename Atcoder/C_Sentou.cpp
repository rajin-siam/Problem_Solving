#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t;
    cin>>n>>t;
    ll a[n];

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]>=t)sum+=t;
        else sum+=(a[i+1]-a[i]);
    }
    sum+=t;
    cout<<sum<<endl;
}