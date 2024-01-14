#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n;
    cin>>n;
    ll cnt=0;
    while(true)
    {
        if(n%2==0)
        {
            cnt++;
            n=n/2;
        }
        else break;
    }
    cout<<cnt<<endl;
}