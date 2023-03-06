#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Print_3n_plus_one_length(ll n,ll *p)
{
    cout<<n<<" ";
    (*p)=(*p)+1;
    if(n==1)return ;
    if(n%2==0)Print_3n_plus_one_length(n/2,p);
    else Print_3n_plus_one_length(3*n+1,p);

}
int main()
{
    ll n;

    ll c=0;
    cin>>n;

    Print_3n_plus_one_length(n,&c);
    cout<<endl<<"Length "<<c<<endl;


}
