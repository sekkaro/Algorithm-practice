#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> f(n + 1);
  for (int i = 1; i <= n; i++) {
    f[i] = i;
  }
  for (int i = 2; i * i <= n; i++) {
    int x = i * i;
    for (int j = x; j <= n; j += x) {
      while (f[j] % x == 0) {
        f[j] /= x;
      }
    }
  }
  vector<int> cnt(n + 1);
  for (int i = 1; i <= n; i++) {
    cnt[f[i]]++;
  }
  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += (ll)cnt[i] * cnt[i];
  }
  cout << ans << endl;
  return 0;
}