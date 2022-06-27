#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  const int M = 200000;
  vector<int> a(M + 1);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x]++;
  }
  ll ans = 0;
  for (int i = 1; i <= M; i++) {
    for (int j = 1; j <= M / i; j++) {
      int k = i * j;
      ans += (ll)a[i] * a[j] * a[k];
    }
  }
  cout << ans << endl;
  return 0;
}