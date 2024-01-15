#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        ll extra=0,mismatch=0;
        ll number_of_0_1=0,number_of_1_0=0;
        for(ll i=0;i<n;i++)
        {
            if(s1[i]=='1' && s2[i]=='0')number_of_1_0++;
            else if(s1[i]=='0' && s2[i]=='1')number_of_0_1++;
        }
        if(number_of_0_1==number_of_1_0)cout<<number_of_1_0<<endl;
        else if(number_of_0_1<number_of_1_0)cout<<number_of_1_0<<endl;
        else cout<<number_of_0_1<<endl;

    }
}