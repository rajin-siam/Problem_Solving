#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    ll a[n+1]={0};
    ll b[n+1]={0};
    n++;
    ll sum=0;
    


    for(ll i=1;i<n;i++){
        cin>>a[i];
        sum+=llabs(a[i]-a[i-1]);
    }
    
    a[0]=0;b[0]=0;
    ll x=sum;
    for(ll i=1;i<n-1;i++)
    {
        sum=x;
        sum-=(llabs(a[i-1]-a[i])+llabs(a[i]-a[i+1]));
        sum+=llabs(a[i-1]-a[i+1]);
        if(n-1==i){sum+=llabs(a[n-2]-0);}
        else sum+=llabs(a[n-1]-0);
        cout<<sum<<endl;
    }
    sum=x;
    
    cout<<sum-llabs(a[n-1]-a[n-2])+llabs(a[n-2])<<endl;
}

