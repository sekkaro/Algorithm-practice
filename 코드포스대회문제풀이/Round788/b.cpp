#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    string s;
    map<char, int> m;
    cin >> n >> s >> k;
    for (int i = 0; i < k; i++) {
      char c;
      cin >> c;
      m[c]++;
    }
    vector<int> a(n, 0);
    for (int i = n - 2; i >= 0; i--) {
      if (m[s[i + 1]]) {
        a[i] = 1;
      } else if (a[i + 1]) {
        a[i] = a[i + 1] + 1;
      }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans = max(ans, a[i]);
    }
    cout << ans << endl;
  }
  return 0;
}