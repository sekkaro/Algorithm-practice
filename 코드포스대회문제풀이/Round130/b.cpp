#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  sort(p.begin(), p.end(), greater<int>());
  vector<ll> s(n + 1);
  s[0] = 0;
  for (int i = 1; i <= n; i++) {
    s[i] = p[i - 1] + s[i - 1];
  }
  for (int i = 0; i < q; i++) {
    int x, y;
    cin >> x >> y;
    cout << s[x] - s[x - y] << endl;
  }
  return 0;
}