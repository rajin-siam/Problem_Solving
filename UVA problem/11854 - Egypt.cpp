#include<iostream>
#include<cmath>
using namespace std;
main()
{
    long long int a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)return 0;
        a=a*a;
        b=b*b;
        c=c*c;
        if((a+b)==c||(b+c)==a||(c+a)==b)cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }

}
