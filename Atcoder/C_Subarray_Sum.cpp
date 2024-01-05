#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,k,s,t;
    cin>>n>>k>>s;

    if(s==1000000000)t=1;
    else t=s+1;
    for(ll i=0;i<k;i++)cout<<s<<" ";
    for(ll i=0;i<n-k;i++)cout<<t<<" ";
    cout<<endl;
}

