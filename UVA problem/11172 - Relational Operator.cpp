#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)cout<<">"<<endl;
        else if(a<b)cout<<"<"<<endl;
        else cout<<"="<<endl;
    }
}
