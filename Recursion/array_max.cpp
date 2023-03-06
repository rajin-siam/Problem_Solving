#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
ll array_max(ll arr[],ll i,ll n, ll mx)
{
    if(i==n-1)return mx;
    if(arr[i]>mx)return array_max(arr, i+1,n,arr[i]);
    else array_max(arr, i+1,n,mx);
    return mx;
}
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    cout<<array_max(arr,0,n,0)<<endl;
    
}
