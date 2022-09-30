#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i < n; i += 2) {
      if ((ll)((i + k) * (i + 1)) % 4 == 0) {
        if (i == 1)
          cout << "Yes\n";
        cout << i << ' ' << i + 1 << '\n';
      } else if ((ll)((i + 1 + k) * i) % 4 == 0) {
        if (i == 1)
          cout << "Yes\n";
        cout << i + 1 << ' ' << i << '\n';
      } else {
        cout << "NO\n";
        break;
      }
    }
  }
  return 0;
}