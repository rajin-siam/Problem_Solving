#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)cout<<c<<endl;
        else if(b==c)cout<<a<<endl;
        else cout<<b<<endl;
    }
}