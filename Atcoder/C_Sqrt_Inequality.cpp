#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    long double a, b, c;
    cin>>a>>b>>c;
   long double x=2*sqrtl(a*b);
   if(x<(c-a-b))cout<<"Yes\n";
   else cout<<"No\n";
}