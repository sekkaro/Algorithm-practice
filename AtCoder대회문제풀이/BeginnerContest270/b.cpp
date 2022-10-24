#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, y, z;
  cin >> x >> y >> z;
  if (y > 0 && y < x) {
    if (z > y)
      cout << "-1\n";
    else if (z < 0)
      cout << abs(z) * 2 + x << '\n';
    else
      cout << x << '\n';
  } else if (y < 0 && y > x) {
    if (z < y)
      cout << "-1\n";
    else if (z > 0)
      cout << abs(z) * 2 + abs(x) << '\n';
    else
      cout << abs(x) << '\n';
  } else
    cout << abs(x) << '\n';
  return 0;
}