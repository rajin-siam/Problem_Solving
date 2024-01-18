#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll x; cin >> x;
  ll ans = x / 11;
  ans *= 2;
  x %= 11;
  if (x > 6) ans += 2;
  else if (x > 0) ans += 1;
  cout << ans << endl;
  return 0;
}
