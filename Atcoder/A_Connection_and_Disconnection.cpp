#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    string s;
    ll k;
    cin>>s>>k;
    ll l=s.length();
    ll c=0;
    if(l==1)
    {
        cout<<(k/2)<<endl;
        return 0;
    }
    ll a,b;
    a=0;b=0;
    ll ans=0;
    if(s[0]==s[l-1])
    {
        for(ll i=0;i<l-1;i++)
        {
            if(s[i]==s[i+1])a++;
            else break;
        }
        a++;
        for(ll i=l-1;i>0;i--)
        {
            if(s[i-1]==s[i])b++;
            else break;
        }
        b++;
        if(a==b && a==l)
        {
            ans=k*a;
            ans=ans/2;
            cout<<ans<<endl;return 0;
        }
        ans=(a/2)+(b/2);
        ans+=(k-1)*((a+b)/2);
    }
    for(ll i=a;i<l-1-b;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
            s[i+1]='*';
        }
    }
    ans+=k*c;
    cout<<ans<<endl;
}
