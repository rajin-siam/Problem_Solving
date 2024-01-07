#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll findClosestMultiple(ll number, ll target) {
    // Calculate the closest multiple
    ll closestMultiple = ceil(target / static_cast<double>(number)) * number;

    return closestMultiple;
}
int main()
{
    
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    ll sum=0;
    for(ll i=n-1;i>=0;i--)
    {
        a[i]=a[i]+sum;
        ll multiple_of_b=a[i];
        ll x=b[i];
        multiple_of_b=findClosestMultiple(x, multiple_of_b);
        
        sum+=llabs(multiple_of_b-a[i]);
    //    cout<<llabs(multiple_of_b-a[i])<<endl;
    }
    cout<<sum<<endl;
    
}