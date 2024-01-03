#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll l = s.length();
    ll ans=0;
    ll u,d;

    for(ll i=l-1;i>=0;i--){
        if(s[i]=='D'){
            d=i;break;
        }
    }

    for(ll i=0;i<l;i++)
    {
        if(s[i]=='U'){
            u=i;break;
        }
    }


    for(ll i=0;i<l;i++)
    {
        if(s[i]=='U')
        {
            ans+=(l-(i+1));
            if(i<=d)ans+=(2*i);
        }
        else {
            ans+=i;
            if(i>=u)ans+=(2*(l-(i+1)));
        }
    }
    cout<<ans<<endl;
}


