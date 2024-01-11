#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=n;j++)
        {
            for(ll k=0;k<=n;k++)
            {
                if(i+j+k<=n)
                cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
    
    
    

}
