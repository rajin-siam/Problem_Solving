#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n;
    cin>>n;
    ll ans=0;
    ans+=(n/5);
    
    if((n%5)!=0)ans++;
    cout<<ans<<endl;
}