#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    string s[n];
    map<string,ll>m;
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
        m[s[i]]++;
    }
    ll sum=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        ll x=it->second;
        x--;
        sum+=(x*(x+1))/2;
    }
    cout<<sum<<endl;
}

