#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n;
    cin>>n;
    ll c=0;
    string s2,s;
    cin>>s2;
    s+=s2[0];
    for(ll i=1;i<n;i++)
    {
        if(s.back()!=s2[i] && s.size()!=0)s.pop_back();
        else s+=s2[i];
    }
    cout<<s.size()<<endl;
}