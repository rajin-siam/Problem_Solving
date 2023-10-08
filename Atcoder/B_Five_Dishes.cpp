#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n=5;
    ll a[n];
    ll b[n]={0};
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        ll x=a[i];
        for(;;)
        {
            if(x%10==0)
            {
                b[i]=x-a[i];break;
            }
            else 
            x++;
        }
    }

    for(ll i=0;i<n-1;i++)
    {
        for(ll j=0;j<n-1;j++)
        {
            if(b[j]>b[j+1])
            {
                swap(b[j],b[j+1]);
                swap(a[j],a[j+1]);
            }
        }
    }
    ll sum=0;
    for(ll i=0;i<n-1;i++)
    {
        sum+=(a[i]+b[i]);
    }
    sum+=a[n-1];
    cout<<sum<<endl;


}