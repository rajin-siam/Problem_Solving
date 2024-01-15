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
        ll ax,bx,cx,dx;
        ll ay,by,cy,dy;
        cin>>ax>>ay;
        cin>>bx>>by;
        cin>>cx>>cy;
        cin>>dx>>dy;
        ll ab=(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        ll ac=(((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy)));
        ll ad=(((ax-dx)*(ax-dx))+((ay-dy)*(ay-dy)));

        if(ab==ac)cout<<ab<<endl;
        else if(ab==ad)cout<<ab<<endl;
        else if(ac==ad)cout<<ac<<endl;

    }
}