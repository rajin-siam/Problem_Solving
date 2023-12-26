#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s,s2;
    cin>>s;
    ll l=s.length();
    ll a[l+1]={0};

    for(ll i=0;i<l;i++)
    {
        if(s[i]=='<')
        {
            a[i+1]=max(a[i+1],a[i]+1);
        }
    }


    for(ll i=l;i>=0;i--)
    {
        if(s[i]=='>')
        {
            a[i]=max(a[i],a[i+1]+1);
        }
    }





    ll sum=0;
    for(ll i=0;i<l+1;i++)
    {
        sum+=a[i];
    }

    cout<<sum<<endl;
}