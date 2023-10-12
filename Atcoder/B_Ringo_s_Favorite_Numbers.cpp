#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll d,n;
    cin>>d>>n;
    if(n%100==0)n++;

    n=n*pow(100,d);
    cout<<n<<endl;
    return 0;
}
