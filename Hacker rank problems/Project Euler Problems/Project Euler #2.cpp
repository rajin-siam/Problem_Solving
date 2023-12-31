#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll b[10000000]={0};
ll a[10000000]={0};
ll start=2;
ll END=2;
ll fibo(ll x);
void sum();
ll checker(ll x);




ll fibo(ll x)
{
    for(ll i=start;true;i++){
            a[i]=a[i-1]+a[i-2];
            if(a[i]>x){
                return i;
            }
    }
}
void sum()
{
    for(ll i=0;i<END;i++)
    {
        b[i]=b[i-1]+a[i];
    }
    return ;
}




ll checker(ll x)
{
    ll flag=0,idx;
    for(ll i=0;i<END;i++)
    {
        if(a[i]>x){
            flag=1;
            idx=i;
            return b[idx];
        }
    }
        if(flag==0){
            END=fibo(x);
            sum();
            start=END;
            
            return b[END-1];
        }

    return 0;
}


int main()
{

    ll t;
    ll xx=2,ans,END=1;
    cin>>t;
    for(ll j=0;j<t;j++)
    {
        ll x;
        cin>>x;
        
    
        a[0]=1;
        a[1]=1;
        
        cout<<checker(x)<<endl;

        
        for(ll i=0;i<END;i++)
        {
            cout<<a[i]<<" ";
        }cout<<endl;
        for(ll i=0;i<END;i++)
        {
            cout<<b[i]<<" ";
        }cout<<endl;
        
        
    }
}
