#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    set<ll>s;
    set<ll>::iterator it;
    ll n,x;
    cin>>n;
   for (ll i = 0; i < n; i++) {
    cin >> x;
    it = s.find(x);
    if (it != s.end()) {
        s.erase(it); 
    }
    else s.insert(x);
}
    cout<<s.size()<<endl;

    return 0;
}