#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  vector<vector<int>> x(n + 1, vector<int>(10));
  for (int i = 0; i < n; i++) {
    int c = s[i] - '0';
    x[i + 1] = x[i];
    x[i + 1][c] ^= 1;
  }
  map<vector<int>, int> mp;
  for (int i = 0; i < n + 1; i++) {
    mp[x[i]]++;
  }
  ll ans = 0;
  for (auto p : mp) {
    ll num = p.second;
    ans += num * (num - 1) / 2;
  }
  cout << ans << '\n';
  return 0;
}