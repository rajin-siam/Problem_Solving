#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,r,b,x;
    cin>>n>>b>>r;
    x=n%(r+b);
    ll y=n/(r+b);
    if(x>=b)cout<<(y*b)+b<<endl;
    else cout<<(y*b)+x<<endl;
    return 0;
}