#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll ans=1e9;
    for(int i=-100; i<=100; i++){
        ll sum=0;
        for(int j=0; j<n; j++) sum+=(a[j]-i)*(a[j]-i);
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
}