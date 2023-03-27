#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<ll, int> am;
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    am[a]++;
  }
  int ans = 0;
  for (auto x : am) {
    ans += x.second / 2;
  }
  cout << ans << '\n';
  return 0;
}