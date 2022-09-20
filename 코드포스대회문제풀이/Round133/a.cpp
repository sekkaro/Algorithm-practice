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
    if (n == 1) {
      cout << 2 << '\n';
      continue;
    }
    int ans = n / 2;
    if (n % 3 == 0)
      ans = min(ans, n / 3);
    else if (n % 3 == 1)
      ans = min(ans, (n / 3) + 1);
    else
      ans = min(ans, (n / 3) + 1);
    cout << ans << '\n';
  }
  return 0;
}