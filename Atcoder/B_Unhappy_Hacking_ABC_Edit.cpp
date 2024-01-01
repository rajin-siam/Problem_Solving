#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<char>sta;
    string s;
    cin>>s;

    ll l=s.length();

    for(ll i=0;i<l;i++)
    {
        if(s[i]!='B')sta.push_back(s[i]);
        else 
        {
            if(!sta.empty())
            sta.pop_back();
        }
    }
    for(ll i=0;i<sta.size();i++)
    {
        cout<<sta[i];
    }cout<<endl;


}