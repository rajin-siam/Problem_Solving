#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll>m;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='E')m['E']++;
    }
    ll mn=LONG_LONG_MAX;
    for(ll i=0;i<n;i++)
    {

        if(s[i]=='W')m['W']++;
        else m['E']--;
        mn=min(mn,m['W']+m['E']-(s[i]=='W'));
    }
    cout<<mn<<endl;
}