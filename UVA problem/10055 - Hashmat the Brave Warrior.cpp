#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int  a,b,c;
    while(scanf("%llu%llu",&a,&b)==2)
    {
        c=a-b;
        if(c<0)
            c=c*-1;
        cout<<c<<endl;
    }
}
