#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll x;cin>>x;
    ll ans=0,cnt=0,i=1;
    while(cnt<x){
        cnt+=i;
        i++;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}