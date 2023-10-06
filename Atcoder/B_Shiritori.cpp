#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll n;
    cin>>n;
    vector<string>s;
    set<string>sss;
    bool flag=true;
    for(ll i=0;i<n;i++)
    {
        string ss;
        cin>>ss;
        s.push_back(ss);
        
        if(sss.find(ss)!=sss.end() && i!=0){
            flag=false;
        }

        sss.insert(ss);
        
    }

    
        for(ll i=1;flag && i<n;i++)
        {
                ll l=s[i-1].length();
                if(s[i][0]!=s[i-1][l-1])flag=false;
        }

    if(flag)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}