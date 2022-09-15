#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<string> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }
  set<string> ts;
  for (int i = 0; i < m; i++) {
    string t;
    cin >> t;
    ts.insert(t);
  }
  int max_u = 16 - (n - 1);
  for (int i = 0; i < n; i++) {
    max_u -= S[i].size();
  }
  vector<bool> used(n);
  auto dfs = [&](auto f, int i, string s, int u) -> bool {
    if (i == n) {
      if (s.size() < 3)
        return false;
      if (ts.count(s))
        return false;
      cout << s << '\n';
      return true;
    }
    if (u) {
      if (f(f, i, s + '_', u - 1))
        return true;
    }
    for (int j = 0; j < n; j++) {
      if (!used[j]) {
        used[j] = true;
        if (f(f, i + 1, s + '_' + S[j], u))
          return true;
        used[j] = false;
      }
    }
    return false;
  };
  for (int i = 0; i < n; i++) {
    used[i] = true;
    if (dfs(dfs, 1, S[i], max_u))
      return 0;
    used[i] = false;
  }
  cout << -1 << '\n';
  return 0;
}