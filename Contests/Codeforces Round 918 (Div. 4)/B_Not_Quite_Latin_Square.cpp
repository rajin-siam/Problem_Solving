#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    ll c1,c2,c3;
    
    string s;
    for(ll i=0;i<t;i++)
    {
        
        for(ll j=0;j<3;j++)
        {
            map<char,ll>m;
            cin>>s;
            m[s[0]]++;
            m[s[1]]++;
            m[s[2]]++;
            
            if(m['A']==0)cout<<"A\n";
            else if(m['B']==0)cout<<"B\n";
            else if(m['C']==0)cout<<"C\n";
        }
    }
}