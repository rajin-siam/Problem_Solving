#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,k;
    ll r,s,p;
    cin>>n>>k;
    cin>>r>>s>>p;
    string t;
    cin>>t;
    ll sum=0;
    string man="";
    for(ll i=0;i<k;i++)
    {
        if(t[i]=='r'){sum+=p;man+='p';}
        else if(t[i]=='p'){sum+=s;man+='s';}
        else if(t[i]=='s'){sum+=r;man+='r';}
    }

    for(ll i=k;i<n;i++)
    {
        if(t[i]=='r')
        {
            if(man[i-k]!='p'){sum+=p;man+='p';}
            else 
            {
                if(i+k<n && t[i+k]=='s')man+='s';
                else man+='r';
            }
        } 
        else if(t[i]=='p')
        {
            if(man[i-k]!='s'){sum+=s;man+='s';}
            else 
            {
                if(i+k<n && t[i+k]=='r')man+='r';
                else man+='p';
            }
        }
        else if(t[i]=='s')
        {
            if(man[i-k]!='r'){sum+=r;man+='r';}
            else 
            {
                if(i+k<n && t[i+k]=='p')man+='r';
                else man+='s';
            }
    }
        }
        
    cout<<sum<<endl;
 //   cout<<man<<endl;
}
