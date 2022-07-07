#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

ll f(ll a, ll b) { return a * a * a + a * a * b + a * b * b + b * b * b; }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  const int M = 1e6;
  ll b = M, ans = 1e18;
  for (ll a = 0; a <= M; a++) {
    while (b > 0 && f(a, b - 1) >= n)
      b--;
    ans = min(ans, f(a, b));
  }
  cout << ans << endl;
  return 0;
}