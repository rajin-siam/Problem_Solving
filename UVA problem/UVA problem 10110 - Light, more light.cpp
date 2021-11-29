#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,counter=0,m;
//    freopen("out.txt","w",stdout);
    while(1)
    {
        cin>>n;
        counter=0;
        if(n==0)return 0;
        m=sqrt(n);
        if(m*m==n)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
