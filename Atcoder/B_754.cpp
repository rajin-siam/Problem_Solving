#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    string s;
    cin>>s;
    string s2;
    ll l=s.length();
    vector<ll>v;
    for(ll i=0;i<l-2;i++)
    {
        s2=s.substr(i, 3); 
        x=stoi(s2);
        v.push_back(x);
    }
    n=v.size();
    ll mn=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        mn=min(llabs(753-v[i]),mn);
    }
    cout<<mn<<endl;
}