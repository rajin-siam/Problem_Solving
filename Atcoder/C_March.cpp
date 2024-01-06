#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    vector<string>v;
    map<char,ll>m;
    for(ll i=0; i<n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='M'|| s[0]=='A'||s[0]=='R'||s[0]=='C'||s[0]=='H')
        {
            v.push_back(s);
            m[s[0]]++;
        }
        
    }
    n=v.size();
    vector<pair<char,ll>>v2;
    for(auto it=m.begin();it!=m.end();it++)
    {
        v2.push_back({it->first,it->second});
    }



    ll sum=0;
    n=v2.size();
/*
    for(ll i=0;i<n;i++)
    {
        cout<<v2[i].first<<"\t"<<v2[i].second<<endl;
    }
*/
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            for(ll k=j+1;k<n;k++)
            {
                sum+=(v2[i].second*v2[j].second*v2[k].second);
            }
        }
    }
    cout<<sum<<endl;
    



}

