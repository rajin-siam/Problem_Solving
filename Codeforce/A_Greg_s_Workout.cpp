#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    ll c1=0,c2=0,c3=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i%3==1)c1+=a[i];
        else if(i%3==2)c2+=a[i];
        else c3+=a[i];
    }
    ll x=max(c1,max(c2,c3));
    if(x==c1)cout<<"chest\n";
    else if(x==c2)cout<<"biceps\n";
    else cout<<"back\n";

}