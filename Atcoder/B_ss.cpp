#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll l;
    
    while(1)
    {
        s.pop_back();
        l=s.length();
        if(l%2==0)
        {
            if(s.substr(0,l/2)==s.substr(l/2,l/2))
            {
                cout<<l<<endl;return 0;
            }
        }
    }
}