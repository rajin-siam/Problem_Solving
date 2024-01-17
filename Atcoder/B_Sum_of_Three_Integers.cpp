#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,k;
    cin>>k>>n;
    ll cnt=0;
    for(ll i=0;i<=k;i++)
    {
        for(ll j=0;j<=k;j++)
        {   
            ll z=n-(i+j);
            if(z>k || z<0)continue;
            else cnt++;
  //          cout<<i<<" "<<j<<" "<<n-(i+j)<<endl;
        }
    }
    cout<<cnt<<endl;
        
}