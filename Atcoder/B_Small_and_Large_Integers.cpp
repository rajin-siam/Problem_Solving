#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll a,b,k;
    set<ll>s;
    cin>>a>>b>>k;
    for(ll i=a,j=0;i<=b && j<k;i++,j++)
    {
        s.insert(i);
    }
    for(ll i=b,j=0;i>=a && j<k ;j++,i--)
    {
        s.insert(i);
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}