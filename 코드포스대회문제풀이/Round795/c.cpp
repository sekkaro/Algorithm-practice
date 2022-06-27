#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> pos;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1')
        pos.push_back(i);
    }
    int m = pos.size();
    int ans = m * 11;
    if (m && n - pos[m - 1] - 1 <= k) {
      ans -= 10;
      k -= n - pos[m - 1] - 1;
      m--;
    }
    if (m && pos[0] <= k) {
      ans--;
    }
    cout << ans << endl;
  }
  return 0;
}