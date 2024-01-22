#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    string s;
    cin>>s;
    if(!isupper(s[0]))s[0]=s[0]-32;
    cout<<s<<endl;
}