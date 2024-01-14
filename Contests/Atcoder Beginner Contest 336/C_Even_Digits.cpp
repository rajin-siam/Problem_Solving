#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll x;
    cin>>x;
    vector<ll>v;
    if(x==1){cout<<0<<endl;return 0;}
    ll a[5]={8,0,2,4,6};
    while(x!=1)
    {
        ll rem=x%5;
        x = ceil((double)x/5);
        v.push_back(a[rem]);
      //  cout<<x<<" ";
    }
    for(ll i=v.size()-1;i>=0;i--)cout<<v[i];
    cout<<endl;
}