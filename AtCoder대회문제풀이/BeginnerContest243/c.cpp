#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  string s;
  cin >> s;
  map<int, set<int>> l;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'L') {
      l[y[i]].insert(x[i]);
    }
  }
  int ok = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'R' && l[y[i]].size() > 0 && *l[y[i]].rbegin() > x[i]) {
      ok = 1;
      break;
    }
  }
  if (ok)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}