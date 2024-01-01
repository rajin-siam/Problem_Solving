#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll n=s.length();
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='9' && i==0)continue;
        if(s[i]>'4')s[i]='9'-s[i]+'0';
    }
    cout<<s<<endl;
}