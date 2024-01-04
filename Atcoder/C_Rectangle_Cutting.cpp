#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double w,h,x,y;
    cin>>w>>h>>x>>y;
    double ans1=w*y;
    double ans2=h*x;
    ll c=0;
    if((x*2)==w && (y*2)==h)c++;

    printf("%.6lf %lld\n",(w*h)/2,c%2);
    

}