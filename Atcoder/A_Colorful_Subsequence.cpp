#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int mod = 1e9+7;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;

    map<char,ll>m;
    for(ll i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    ll sum=1;
    for(auto it=m.begin();it!=m.end();it++)
    {
        sum*=(it->second+1);
        sum%=mod;
    }
    cout<<sum-1<<endl;
    
    
    

}
    