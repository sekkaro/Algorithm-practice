#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, y, n;
  cin >> x >> y >> n;
  if (n % 3 == 0)
    cout << min(y * (n / 3), x * n) << '\n';
  else if (n % 3 == 1)
    cout << min(y * (n / 3) + x, x * n) << '\n';
  else
    cout << min(y * (n / 3) + (x * 2), x * n) << '\n';
  return 0;
}