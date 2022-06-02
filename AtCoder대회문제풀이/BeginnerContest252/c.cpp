#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  set<int> cnt;
  int ans = 1e6;
  for (int i = 0; i <= 9; i++) {
    int t = 0;
    while (1) {
      for (int j = 0; j < n; j++) {
        if (!cnt.count(j) && s[j][t % 10] - '0' == i) {
          cnt.insert(j);
          break;
        }
      }
      if (cnt.size() == n)
        break;
      t++;
    }
    ans = min(t, ans);
    cnt.clear();
  }
  cout << ans << endl;
  return 0;
}