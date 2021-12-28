#include <bits/stdc++.h>
using namespace std;
main()
{

    long long int t,i,j,h1,m1,h2,m2,M1,M2;
    while(1)
    {
        cin>>h1>>m1>>h2>>m2;
        if(h1==0&&m1==0&&h2==0&&m2==0)return 0;
        if(h2>h1||(h2==h1&&m2>=m1))
        {
            M2=h2*60;
            M2=M2+m2;
            M1=h1*60;
            M1=M1+m1;
        }
        else
        {

            M2=h2*60;
            M2=M2+m2;
            M2=M2+24*60;
            M1=h1*60;
            M1=M1+m1;
        }
        cout<<M2-M1<<endl;
    }

}
