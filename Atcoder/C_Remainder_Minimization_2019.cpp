#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll l, r;
	cin >> l >> r;
	if (r - l >= 2019) cout << 0;
	else {
	    ll ans = 2019;
		for (ll L = l; L <= r; L++) {
			for (ll R = L + 1; R <= r; R++) ans = min(ans, (R % 2019 * L % 2019) % 2019);
		}
		cout << ans;
	}

}

