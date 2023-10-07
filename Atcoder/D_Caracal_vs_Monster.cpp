#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll fun(ll n)
{
    ll cnt=0;
    while(n!=0)
    {
        n=n/2;
        cnt++;
    }
    return cnt;
}

int main()
{
    ll n;
    cin>>n;
    ll cnt;
    cnt= fun(n);
    cout << fixed <<setprecision(0) << static_cast<double>(pow(2,cnt)-1) << std::endl;

}