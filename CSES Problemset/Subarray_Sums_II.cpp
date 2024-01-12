#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,x;
    cin>>n>>x;
    ll arr[n+1];
    ll preSum[n+1]={0};
    map<ll,ll>m;
    m[0]=1;
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
        preSum[i]=preSum[i-1]+arr[i];
       
    }
    ll cnt=0;
    
    for(ll i=1;i<=n;i++)
    {
        ll y=preSum[i]-x;
        cnt+=m[y];
        m[preSum[i]]++;
    }
    cout<<cnt<<endl;

}