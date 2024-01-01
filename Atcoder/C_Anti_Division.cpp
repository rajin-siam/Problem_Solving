#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(a%b==0)return b;
    return gcd(b,a%b);
}
ll lcm(ll x,ll b, ll c)
{
    return (b*c)/x;
}
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll a2,b2;
    ll x=gcd(c,d);
    x=lcm(x,c,d);
    b2=(b/c);
    ll p=b2;
    b2=(b/d);
    ll q=b2;
    b2=(b/x);
    ll r=b2;
    ll ans1=(p+q-r);
    b2=((a-1)/c);
    p=b2;
    b2=((a-1)/d);
    q=b2;
    b2=((a-1)/x);
    r=b2;
    ll ans2=p+q-r;
    cout<<b-a+1-(ans1-ans2)<<endl;
}