#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    if(n>=m)
    {
        ans=m/2;
    }
    else 
    {
        ans=n;
        m=m-(ans*2);
        ans+=(m/4);
    }
    cout<<ans<<endl;
    

    


    
}