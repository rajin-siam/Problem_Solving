#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll l=s.length();
    ll a=0,b=0,c=0;
    for(ll i=0;i<l;i++)
    {
        if(s[i]=='a')a++;
        else if(s[i]=='b')b++;
        else c++;
    }
    ll x1=llabs(a-b);
    ll x2=llabs(b-c);
    ll x3=llabs(c-a);
    if(l==1)
    {
        cout<<"YES\n";
    }
    else if(l==2)
    {
        if(a!=2 && b!=2 && c!=2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if( l==3)
    {
        if(a==b && b==c)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(x1+x2+x3<=3 && l>=4)cout<<"YES\n";
    else cout<<"NO\n";
}