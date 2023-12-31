#include<bits/stdc++.h>
using namespace std;
#define ll long long 
long long int solve(long long int x)
{
    ll n1=x/3;
    ll n2=x/5;
    ll s1=n1*((2*3)+((n1-1)*3));
    ll s2=n2*((2*5)+((n2-1)*5));
    s1=s1/2;
    s2=s2/2;
    ll n3=x/15;
    ll s3=n3*((2*15)+((n3-1)*15));
    s3=s3/2;
    return s1+s2-s3;
    
}
int main(){
    ll t;
    cin >> t;
    for(ll a0 = 0; a0 < t; a0++){
        ll n;
        cin >> n;
        
        cout<<solve(n-1)<<endl;
        
        
    }
    return 0;
}
