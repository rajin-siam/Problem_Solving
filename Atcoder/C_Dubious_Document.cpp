#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    vector<string>v;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    ll l=v[0].length();
    map<char,ll>m;
    for(ll i=0;i<l;i++)
    {
        m[v[0][i]]++;
    }
    string ss="";
    for(auto it=m.begin();it!=m.end();it++)
    {
        char ch=it->first;
        ll mn=LONG_LONG_MAX;
        for(ll i=0;i<n;i++)
        {
            ll c=0;
            l=v[i].length();
            for(ll j=0;j<l;j++)
            {
                if(v[i][j]==ch)c++;
            }
            mn=min(mn,c);
        }
    //    cout<<ch<<"\t"<<mn<<endl;
        for(ll k=0;k<mn;k++)
        {
            ss+=ch;
        }

    }
    cout<<ss<<endl;

}
