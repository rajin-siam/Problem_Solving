#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll arr[3][3];
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    ll a[3],b[3];

    a[0]=0;
    b[0]=arr[0][0]-a[0];
    a[1]=arr[1][0]-b[0];
    a[2]=arr[2][0]-b[0];

    b[1]=arr[0][1]-a[0];
    b[2]=arr[0][2]-a[0];
    
    bool ans=true;
    for(ll i=0;i<3 && ans;i++)
    {
        for(ll j=0;j<3 && ans;j++)
        {
            if(arr[i][j]!=(a[i]+b[j]))
            {
                ans=false;
            }
        }
    }
    if(ans)cout<<"Yes\n";
    else cout<<"No\n";

}