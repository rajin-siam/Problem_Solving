#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll ans=0,check=0;

    for(ll i=0;i<n;i++)
    {
        if(check>=a[i])check = a[i];
        else 
        {
            ans+=(a[i]-check);
            check=a[i];
        }
    }
    cout<<ans<<endl; 
}