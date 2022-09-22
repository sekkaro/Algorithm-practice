#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> ans;
  for (ll x = n;; x = (x - 1) & n) {
    ans.push_back(x);
    if (x == 0)
      break;
  }
  for (int i = ans.size() - 1; i >= 0; --i) {
    cout << ans[i] << '\n';
  }
  return 0;
}