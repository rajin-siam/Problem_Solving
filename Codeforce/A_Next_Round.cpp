#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,k,c=0;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];

    for(ll i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)c++;
    }
    cout<<c<<endl;
}