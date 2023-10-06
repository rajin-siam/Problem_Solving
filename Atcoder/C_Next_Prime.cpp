#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    for(ll i=n;true;i++)
    {
        ll flag=0;
        for(ll j=2;j*j<=n;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}