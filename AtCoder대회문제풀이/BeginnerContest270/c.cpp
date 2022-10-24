#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x, y;
  cin >> n >> x >> y;
  vector<vector<int>> a(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    a[u].push_back(v);
    a[v].push_back(u);
  }
  vector<int> chk(n + 1, 0);
  vector<int> ans;
  auto dfs = [&](int i, auto f) -> bool {
    chk[i] = 1;
    if (i == x) {
      ans.push_back(i);
      return true;
    }
    for (int j = 0; j < a[i].size(); j++) {
      if (chk[a[i][j]])
        continue;
      if (f(a[i][j], f)) {
        ans.push_back(i);
        return true;
      }
    }
    return false;
  };
  dfs(y, dfs);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << ' ';
  }
  cout << '\n';
  return 0;
}