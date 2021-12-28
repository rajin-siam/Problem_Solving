#include <bits/stdc++.h>
using namespace std;
main()
{

    long long int t,i,j,d1,m1,y1,d2,m2,y2,Y,counter=0,sign=0;
    char c;
    while(scanf("%c",&c)!=-1)
    {
        if(c=='\"')
        {
            if(counter%2==0)cout<<"``";
            else
            {
                cout<<"\'";
                cout<<"\'";
            }

            counter++;
        }
        else cout<<c;
    }

}
