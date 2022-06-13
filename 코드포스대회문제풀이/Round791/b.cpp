#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n + 1);
  ll sum = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  int num = 0;
  set<int> s;
  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      int i, x;
      cin >> i >> x;
      if (num && !s.count(i)) {
        sum += (x - num);
        s.insert(i);
      } else {
        sum += (x - a[i]);
      }
      a[i] = x;
    } else {
      int x;
      cin >> x;
      num = x;
      sum = (ll)x * n;
      s.clear();
    }
    cout << sum << endl;
  }
  return 0;
}