#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    string s,s2;
    cin>>s>>s2;
    reverse(s.begin(),s.end());
    cout<<((s==s2) ? "YES\n" : "NO\n");
}