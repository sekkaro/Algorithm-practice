#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int ans = 0;
  for (int i = 0; i < 1 << n; i++) {
    map<char, int> cnt;
    for (int j = 0; j < n; j++) {
      if (i >> j & 1) {
        for (char c : s[j]) {
          cnt[c]++;
        }
      }
    }
    int res = 0;
    for (auto x : cnt) {
      if (x.second == k)
        res++;
    }
    ans = max(ans, res);
  }
  cout << ans << endl;
  return 0;
}