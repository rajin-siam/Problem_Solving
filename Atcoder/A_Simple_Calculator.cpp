#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,val=0;
    cin>>a>>b;
    ll x=llabs(a);
    ll y=llabs(b);
    ll dif=llabs(x-y);
    if(a>0)
    {
        if(a<b)val= dif;
        else if(a>b)val=dif+1+(b>0);
    }
    else if(a<0)
    {
        if(a<b)val=dif+(b>0);
        else if(a>b)val=dif+2;
    }
    else if(a==0)
    {
        val=dif+(b<0);
    }

    cout<<val<<endl;
}