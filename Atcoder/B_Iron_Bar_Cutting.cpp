#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    ll a[n],b[n]={0},c[n-1];

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b[0]=a[0];
    for(ll i=1;i<n;i++)
    {
            b[i]=a[i]+b[i-1];
    }


    for(ll i=0;i<n-1;i++)
    {
     //   cout<<b[i]<<"\t"<<b[n-1-i]-b[i]<<endl;
        c[i]=llabs(b[i]-(b[n-1]-b[i]));
      //  cout<<c[i]<<endl;
    }
    cout<<*min_element(c,c+n-1)<<endl;

    return 0;
}
