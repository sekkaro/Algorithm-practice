#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string s;
  cin >> n >> s;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  map<int, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    mp[w[i]].push_back(i);
  }
  int now = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1')
      now++;
  }
  int ans = now;
  for (auto p : mp) {
    for (auto i : p.second) {
      if (s[i] == '1')
        now--;
      else
        now++;
    }
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}