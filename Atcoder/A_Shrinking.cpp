#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll l=s.length();
    map<char,ll>m;
    ll c=0,c2=0;
    for(ll i=0;i<l;i++)m[s[i]]++;
    ll maxValue=0;
    char iter;
    string ss;
    for(auto it=m.begin();it!=m.end();it++)ss=ss+it->first;
    ll l2=ss.length();
    ll ans = 0;
    vector<ll>v;
    for(ll i=0;i<l2;i++)
    {
        ll c=0;
        for(ll j=0;j<l;j++)
        {
            
            if(ss[i] != s[j])c++;
            else {
                ans=max(ans,c);
                c=0;
                
            }
        }ans=max(ans,c);
        v.push_back(ans);ans=0;
    }
    cout<< *min_element(v.begin(),v.end())<<endl;
}


