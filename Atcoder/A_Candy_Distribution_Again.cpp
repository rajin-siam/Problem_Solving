#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);
    ll cnt=0, sum=x;
    for(ll i=0;i<n && sum>0 ;i++)
    {
        sum-=a[i];
        if(sum>=0)
        cnt++;
    }
    if(sum>0)cnt--;
    cout<<cnt<<endl;
}