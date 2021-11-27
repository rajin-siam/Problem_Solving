#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    double sum=0;
    int right_counter=0,i,j,l;
    while(1)
    {
        cin>>s;
        if(s[0]=='*')return 0;

        l=s.length();
        right_counter=0;

            for( j=0;j<l;j++)
            {
                sum=0.0;
                if(s[j]=='/')
                {
                        for(i=j+1;i<l;i++)
                        {

                            if(s[i]=='/')break;
                                else if(s[i]=='W')sum+=1.0;
                                else if(s[i]=='H')sum+=0.5;
                                else if(s[i]=='Q')sum+=0.25;
                                else if(s[i]=='E')sum+=0.125;
                                else if(s[i]=='S')sum+=0.0625;
                                else if(s[i]=='T')sum+=0.03125;
                                else if(s[i]=='X')sum+=0.015625;
                        }
                }

                if(sum==1.0)right_counter++;
            }
            cout<<right_counter<<endl;
    }


}
