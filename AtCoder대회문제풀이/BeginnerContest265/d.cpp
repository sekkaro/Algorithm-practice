#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<ll> b(3);
  for (int i = 0; i < 3; i++) {
    cin >> b[i];
  }
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<ll> s(n + 1);
  for (int i = 1; i <= n; i++) {
    s[i] = s[i - 1] + a[i - 1];
  }
  unordered_set<ll> us;
  for (int i = 0; i <= n; i++) {
    us.insert(s[i]);
  }
  for (int i = 0; i <= n; i++) {
    ll x = s[i];
    for (int j = 0; j < 3; j++) {
      x += b[j];
      if (!us.count(x))
        break;
      if (j == 2) {
        cout << "Yes\n";
        return 0;
      }
    }
  }
  cout << "No\n";
  return 0;
}