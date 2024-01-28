#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll x,y,ans=0,ans2=0;
    cin>>x>>y;
    
    ans=min(x,y);
    x=x-ans;
    y=y-ans;
    
    ans2=(max(x,y)/2);
    cout<<ans<<" "<<ans2<<endl;
}