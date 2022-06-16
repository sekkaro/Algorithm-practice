#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n), f(n), bitf(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[i] > a[j])
          f[i]++;
      }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if (a[j] > a[i])
          f[j]--;
      }
      bitf[0] = f[0];
      for (int j = 1; j < i; j++) {
        bitf[j] = bitf[j - 1] + f[j];
      }
      for (int j = 0; j < i; j++) {
        if (a[j] < a[i])
          ans += bitf[i - 1] - bitf[j];
      }
    }
    cout << ans << endl;
  }
  return 0;
}