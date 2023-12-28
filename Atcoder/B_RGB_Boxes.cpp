#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll R,G,B,n,b,c=0;
    cin>>R>>G>>B>>n;

    for(ll i=0;i<=3000;i++)
    {
        b=n-(i*R);
        if(b<0)break;
        for(ll j=0;j<=3000;j++)
        {
            b=n-(i*R)-(j*G);
            if(b<0)break;
            if(b%B==0 || b==0)
            {
                c++;
            
            }
        }
    }
    cout<<c<<endl;
}