#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    set<ll>s;
    for(ll c=1;true;c++)
    {
        if(s.find(n)!=s.end()){
            cout<<c<<endl;
            return 0;
        }
        s.insert(n);
        if(n%2==0)n=n/2;
        else n=(3*n)+1;
     //   cout<<n<<" ";
    }

}