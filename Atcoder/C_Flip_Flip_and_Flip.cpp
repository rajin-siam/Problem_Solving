#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,m,ans=0;
    cin>>n>>m;
    if(n==1&& m==1)ans=1;
    else if(n==1 || m==1)ans=max(n,m)-2;
    else if(n==2 || m==2)ans=0;
    else {
        ans=(n-2)*(m-2);
    }
    if(ans>=0)cout<<ans<<endl;
    else cout<<0<<endl;
}