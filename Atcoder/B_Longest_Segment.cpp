#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll xx[n],yy[n];
    for(ll i=0;i<n;i++)
    {
        cin>>xx[i]>>yy[i];
    }
    double mx=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ll x1=xx[i];
            ll x2=xx[j];

            ll y1=yy[i];
            ll y2=yy[j];

            double dis=0;
            dis=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
            if(mx<dis)mx=dis;
        }
    }
    printf("%.10lf\n",mx);
}