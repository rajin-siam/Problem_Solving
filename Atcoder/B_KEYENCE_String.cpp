#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1,s2;
    cin>>s1;
    s2="keyence";
    ll l1=s1.length();
    ll l2=s2.length();
    ll c1=0,c2=0;
    for(ll i=0;i<l1;i++)
    {
        if(s1[i]==s2[i])c1++;
        else break;
    }
    

    
    for(ll j=l1-1;j>=0;j--)
    {
        if(s1[j]==s2[j-l1+l2])c2++;
        else break;
    }

    if((c1+c2)>=7)cout<<"YES\n";
    else cout<<"NO\n";
}