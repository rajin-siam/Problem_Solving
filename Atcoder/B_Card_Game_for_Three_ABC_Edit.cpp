#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    reverse(s3.begin(),s3.end());
    
    char ch=s1.back();
    s1.pop_back();

    while(true)
    {
        if(ch=='a')
        {
            if(s1.empty()){cout<<"A\n";return 0;}
            ch=s1.back();
            s1.pop_back();
        }
        else if(ch=='b')
        {
            if(s2.empty()){cout<<"B\n";return 0;}
            ch=s2.back();
            s2.pop_back();
        }
        else if(ch=='c')
        {
            if(s3.empty()){cout<<"C\n";return 0;}
            ch=s3.back();
            s3.pop_back();
        }

    }
}