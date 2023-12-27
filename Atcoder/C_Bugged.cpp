#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);

    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
    }
    ll i=0;
    while(sum%10==0&& i<n)
    {
        if(a[i]%10!=0){
            sum-=a[i];break;
    }
        
        i++;
    }
    if(sum%10==0)cout<<0<<endl;
    else cout<<sum<<endl;
}