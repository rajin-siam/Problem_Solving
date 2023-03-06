#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
double power_function(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power_function(base, exponent - 1);
    } else {
        return 1 / base * power_function(base, exponent + 1);
    }

}
int main()
{
    ll n,p;
    cin>>n>>p;
    cout<<power_function(n,p)<<endl;
    
}
