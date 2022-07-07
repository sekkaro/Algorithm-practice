#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    ll ans = n;
    for (int i = 1; i < n; i++) {
      if (s[i] != s[i - 1])
        ans += i;
    }
    cout << ans << endl;
  }
  return 0;
}