#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k,a,b,sum=1,ans=0;
    cin>>k>>a>>b;

    ll kk=k;
    if(a<b)
    {
        if(k-a>=1)
            {
                sum+=a-1;
                k=k-(a-1);
                if(k%2==1)sum++;
                k=k/2;
                sum=sum+(k*b);
                sum-=(k*a);
                ans=sum;
                if(ans<1+kk)ans=1+kk;
    

            }
            else {sum+=k;ans=sum;}
    }
    else ans=sum+k;
    cout<<ans<<endl;
    
}