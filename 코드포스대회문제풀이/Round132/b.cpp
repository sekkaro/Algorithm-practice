#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<ll> s(n), sr(n);
  for (int i = 1; i < n; i++) {
    s[i] = max(0, a[i - 1] - a[i]);
    sr[i] = max(0, a[i] - a[i - 1]);
  }
  s[0] = sr[0] = 0;
  for (int i = 1; i < n; i++) {
    s[i] += s[i - 1];
    sr[i] += sr[i - 1];
  }
  for (int i = 0; i < m; i++) {
    int si, ti;
    cin >> si >> ti;
    --si;
    --ti;
    if (si < ti)
      cout << s[ti] - s[si] << '\n';
    else
      cout << sr[si] - sr[ti] << '\n';
  }
  return 0;
}