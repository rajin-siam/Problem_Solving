#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    vector<ll> a;
    ll y;
    cin>>y;
    a.push_back(y);
    for(ll i=0;i<n-1;i++)
    {
        cin>>y;
        if(a.back()!=y)a.push_back(y);
        
    }

    ll flag=0,c=0;
    ll x=0;
    n=a.size();
    for(ll i=0;i<n-1;)
    {
       // cout<<i<<endl;
        for(ll j=i;j<n-1 && a[j]<=a[j+1];j++)
        {
            flag=1;
            x=j+1;
        }
        if(flag==1){
                        c++;
                        i=x+1;
                    }
        for(ll j=i;j<n-1 && a[j]>=a[j+1];j++)
        {
            flag=2;
            x=j+1;
        }
        if(flag==2){
                        c++;
                        i=x+1;
                    }
    }

    if(flag==1 && a[n-2]>a[n-1] )c++;
    else if(flag==2 && a[n-2]<a[n-1] )c++;
    if(n==1)cout<<1<<endl;
    else 
    cout<<c<<endl;


}