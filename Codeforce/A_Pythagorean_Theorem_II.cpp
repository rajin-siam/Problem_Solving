#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mx=2e8+12;
bool isPerfectSquare[mx];
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<=n;i++)
    {
        isPerfectSquare[i*i]=1;
    }
    ll cnt=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=i;j<=n;j++)
        {
            if(isPerfectSquare[(i*i)+(j*j)])cnt++;
        }
    }
    cout<<cnt<<endl;

    
} 
