#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    string s;
    cin>>s;
    ll l = s.length(),c=0,ans=1;
    for(ll i=0;i<l-1;i++)
    {
        if(s[i]!=s[i+1])c++;
    }
    cout<<c<<endl;
    
    

}
    