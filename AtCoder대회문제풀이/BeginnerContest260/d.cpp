#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  set<int> s;
  vector<int> nxt(n, -1), cnt(n, 0), ans(n, -1);
  for (int ni = 1; ni <= n; ni++) {
    int p;
    cin >> p;
    --p;
    auto it = s.lower_bound(p);
    if (it == s.end()) {
      cnt[p]++;
    } else {
      cnt[p] = cnt[*it] + 1;
      nxt[p] = *it;
      s.erase(it);
    }
    if (cnt[p] == k) {
      int i = p;
      while (i != -1) {
        ans[i] = ni;
        i = nxt[i];
      }
    } else {
      s.insert(p);
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << '\n';
  }
  return 0;
}