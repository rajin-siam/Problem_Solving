#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n;
    cin>>n;
    string s;
    vector<ll>v;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        ll c=0;
        for(ll j=i;s[j]!='W' && j<n;j++)
        {
            c++;
            i=j;
        }
        if(c!=0)v.push_back(c);
    }
    cout<<v.size()<<endl;
    for(auto x : v)
    {
        cout<<x<<" ";
    }cout<<endl;
}