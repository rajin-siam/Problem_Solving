#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,k;
    cin>>n>>k;
    ll a[k],b[k];
    set<ll>s1,s2;
    for(ll i=0;i<k;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]==1)s1.insert(b[i]);
        else if(b[i]==n)s2.insert(a[i]);
    }

    for(auto it=s1.begin();it!=s1.end();it++)
    {
        if(s2.find(*it)!=s2.end())
        {
            cout<<"POSSIBLE"<<endl;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE\n";

}

