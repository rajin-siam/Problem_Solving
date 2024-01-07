#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[6];
    for(ll i=0;i<5;i++)cin>>a[i];
    double x=*min_element(a,a+5);
    ll xx=(ceil) ((double) n/x);
   // cout<<xx<<endl;
    printf("%lld\n",5+xx-1);


}