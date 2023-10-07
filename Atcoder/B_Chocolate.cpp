#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll d,x;
    cin>>n>>d>>x;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;

    ll xx=d;
    for(ll i=0;i<n;i++)
    sum+=(xx-1+a[i])/a[i];

    cout<<sum+x<<endl;

}