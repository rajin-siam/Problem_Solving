#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=m;j++)
        {
            if(k==((i*(m-j))+(j*(n-i))))
            {
                cout<<"Yes\n";return 0;
            }
        }
    }
    cout<<"No\n";
    
    
}