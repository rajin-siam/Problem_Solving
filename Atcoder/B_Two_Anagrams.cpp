#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    map<char,ll>m1,m2;
    for(ll i=0;i<s.length();i++)m1[s[i]]++;
    for(ll i=0;i<t.length();i++)m2[t[i]]++;
    bool ans=false;

    if(s==t){cout<<"No\n";return 0;}

    for(auto it1=m1.begin() ;it1!=m1.end() ;it1++)
    {
        for(auto it2=m2.begin();it2!=m2.end();it2++)
        {
           // cout<<it1->first<<"\t"<<it2->first<<endl;
            if(it1->first<it2->first){ans=true;break;}
        }
        if(ans)break;
    }
    if(ans){cout<<"Yes\n";return 0;}

    if(m1.size()==m2.size())
    {
        if(s.length()<t.length())ans=true;
    }

    
        if(ans){cout<<"Yes\n";return 0;}
        else {cout<<"No\n";return 0;}
    





}