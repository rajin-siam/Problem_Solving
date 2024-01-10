#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool containsElement(set<char>& charSet, char element) {
    return charSet.find(element) != charSet.end();
}
int main()
{
    ll n;
    cin>>n;
    for(ll kk=0;kk<n;kk++)
    {
        ll l;
        cin>>l;
        string s;
        cin>>s;
        set<char>v = {'a', 'e'};
        set<char>c = {'b','c','d'};
        string s2="";
        for(ll i=0;i<l;i++)
        {
            if(containsElement(c,s[i]))s2+='C';
            else s2+='V';

        }
   //     cout<<s2<<endl;
        vector<string>s3;
        for(ll i=0;i<l;)
        {
            if(s2.substr(i,4)=="CVCV")
            {
                s3.push_back(s.substr(i,2));
                i=i+2;
            }
                
            else
            {
                s3.push_back(s.substr(i,3));
                i=i+3;
            } 
        }
        cout<<s3[0];
        for(ll i=1;i<s3.size();i++)
        {
            cout<<"."<<s3[i];
        }
        cout<<endl;
}
}