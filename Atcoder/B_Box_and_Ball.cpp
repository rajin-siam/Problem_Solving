#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n,q;
    cin>>n>>q;
    map<ll,ll>m;
    set<ll>s;
    for(ll i=0;i<n;i++)
    {
        m[i+1]++;
    }

    s.insert(1);
    for(ll i=0;i<q;i++)
    {
        ll x,y;
        cin>>x>>y;
        auto it=s.find(x);
        if(it!=s.end())
        {
            if(m[x]==1)
            {
                m[x]--;
                s.erase(it);
  //              cout<<x<<" is deleted"<<endl;
                m[y]++;
                s.insert(y);
 //               cout<<y<<" is inserted "<<endl;
            }
            else 
            {
                m[x]--;
                m[y]++;
                s.insert(y);
            }
        }
        else 
        {
            m[x]--;
            m[y]++;
        }
        
        
    }
    cout<<s.size()<<endl;

  
}
