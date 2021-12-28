#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,t,i=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        printf("Case %lld: ",i);
        if((a+b)>c&&(b+c)>a&&(a+c)>b)
        {
                    if(a==b&&b==c&&a==c)cout<<"Equilateral"<<endl;
                else if(a==c||b==c||b==a)cout<<"Isosceles"<<endl;
                else cout<<"Scalene"<<endl;
        }
        else cout<<"Invalid"<<endl;
        i++;
    }
}
