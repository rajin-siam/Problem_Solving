#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,c=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        ll rem=y-x;
        if(rem>1)c++;
    }
    cout<<c<<endl;
}