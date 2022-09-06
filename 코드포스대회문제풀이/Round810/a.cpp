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
    if (n % 2 == 0)
      cout << n << ' ';
    for (int i = (n % 2 == 0) ? 3 : 1; i <= n; i += 2) {
      cout << i << ' ';
    }
    for (int i = 2; (n % 2 == 0) ? i < n : i <= n; i += 2) {
      cout << i << ' ';
    }
    if (n % 2 == 0)
      cout << 1 << ' ';
    cout << '\n';
  }
  return 0;
}