#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];

    if(n%2==0)
    {
        for(ll i=n;i>=2;i-=2)
        {
            cout<<a[i-1]<<" ";
        }
        
        for(ll i=1;i<=n;i+=2)
        {
            cout<<a[i-1]<<" ";
        }
    }
    else 
    {
        for(ll i=n;i>=1;i-=2)
        {
            cout<<a[i-1]<<" ";
        }

        for(ll i=2;i<=n;i+=2)
        {
            cout<<a[i-1]<<" ";
        }
    }
    

    


    
}