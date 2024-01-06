#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate the LCM of two numbers
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}
int main()
{
    ll n,m;
    cin>>n>>m;  
    string s,t;
    cin>>s>>t;
    ll L=lcm(n,m);
    map<ll,char>x;
    for(ll i=0;i<n;i++)
    {
        ll pos = (((i)*(L/n))+1);
        
        x[pos]=s[i];

    }
    bool val=true;
//    cout<<x<<endl;
    for(ll i=0;i<m;i++)
    {
        ll pos = (((i)*(L/m))+1);
        if(x[pos]==0 || x[pos]==t[i])x[pos]=t[i];
        else {val=false;break;}
        
    }
 //   cout<<x<<endl;
    

    if(val)cout<<L<<endl;
    else cout<<-1<<endl;
}