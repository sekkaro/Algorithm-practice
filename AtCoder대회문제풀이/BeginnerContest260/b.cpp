#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<int> a(n), b(n);
  map<int, vector<int>> m, e, me;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]].push_back(i + 1);
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    e[b[i]].push_back(i + 1);
    me[a[i] + b[i]].push_back(i + 1);
  }
  map<int, int> cnt;
  vector<int> ans;
  auto solve = [&](map<int, vector<int>> t, int i) {
    for (auto it = t.rbegin(); it != t.rend(); it++) {
      for (int j = 0; j < it->second.size() && i > 0; j++) {
        int pos = it->second[j];
        if (!cnt[pos]) {
          ans.push_back(pos);
          cnt[pos]++;
          i--;
        }
      }
    }
  };
  solve(m, x);
  solve(e, y);
  solve(me, z);
  sort(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << '\n';
  }
  return 0;
}