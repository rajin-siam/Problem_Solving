#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a,b,x;

ll binary_search()
{
    ll start=0,mid;
    ll end=1000000000;
    while(start<=end)
    {
        
        mid =start+end;
        mid=mid/2;
   //     cout<<start<<"\t"<<mid<<"\t"<<end<<endl;
   //     cout<<(int)(a*mid)+(b*(log10(mid)+1))<<endl;
        ll z=(a*mid)+(b*((int)(log10(mid)+1)));
        if(x==z)return mid;
        else if(z<x)
        {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }

    return end;
}
int main()
{
    
    cin>>a>>b>>x;
    cout<<binary_search()<<endl;


}