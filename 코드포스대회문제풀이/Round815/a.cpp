#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((double)a / b == (double)c / d)
      cout << 0 << '\n';
    else if (a == 0 || c == 0 || (a * d) % (b * c) == 0 ||
             (b * c) % (a * d) == 0)
      cout << 1 << '\n';
    else
      cout << 2 << '\n';
  }
  return 0;
}