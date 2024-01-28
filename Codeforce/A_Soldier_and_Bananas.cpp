#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll k,n,w;
    cin>>k>>n>>w;

    ll ans=(w*(w+1));
    ans=ans/2;
    ans=ans*k;
    if(ans>=n)
    cout<<(ans-n)<<endl;
    else cout<<0<<endl;

}