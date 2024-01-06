#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    ll a[n];
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==i+1)v.push_back(a[i]);
    }
    ll l=v.size();
    ll c=0;
    for(ll i=0;i<l-1;){
        if(llabs(v[i+1]-v[i])==1){c++;i+=2;}
        else i++;
    }

    cout<<(l-(c*2))+c<<endl;


}

