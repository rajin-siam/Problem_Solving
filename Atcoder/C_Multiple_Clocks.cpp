#include<bits/stdc++.h>
using namespace std;


typedef unsigned long long  ull;

ull gcd(ull a, ull b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

ull findlcm(ull arr[], ull n)
{
	ull ans = arr[0];
	for (ull i = 1; i < n; i++)
    {
        ull x=(gcd(arr[i], ans));
        ans = (arr[i] *( ans /x));
    }
		

	return ans;
}


int main(void) {
    ull N;
    cin >> N;

    ull a[N];
    for(ull i=0;i<N;i++)
    {
        cin>>a[i];
    }
    ull ans=findlcm(a,N);
    

cout << ans << endl;
return 0;
}