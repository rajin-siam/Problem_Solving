#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s,s2,s3;
    ll q,k=0;
    cin>>s>>q;
    s2="";s3="";
    while(q--)
    {
        ll x;
        cin>>x;
        if(x==2)
        {
            ll y;
            string ch;
            cin>>y>>ch;
            if(y==1)
            {
                if(k%2==0)
                {
                    ch=ch+s2;
                    s2=ch;
                }
                else 
                s3=s3+ch;
                
            }
            else 
            {
                if(k%2==1)
                {
                    ch=ch+s2;
                    s2=ch;
                }
                else 
                s3=s3+ch;
            }
            
        }
        else 
        {
            k++;
        }
    }
    if(k%2==1)
    {
        reverse(s3.begin(),s3.end());cout<<s3;
        reverse(s.begin(),s.end());cout<<s;
        reverse(s2.begin(),s2.end());cout<<s2;
        cout<<endl;
    }
    else 
    cout<<s2<<s<<s3<<endl;
    
}