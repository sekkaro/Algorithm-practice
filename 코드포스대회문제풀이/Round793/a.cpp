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
    cin >> n;
    string s;
    cin >> s;
    int ans = n % 2 == 0 ? 2 : 1;
    for (int i = n / 2; i < n - 1; i++, ans += 2) {
      if (s[i] != s[i + 1])
        break;
    }
    cout << ans << endl;
  }
  return 0;
}