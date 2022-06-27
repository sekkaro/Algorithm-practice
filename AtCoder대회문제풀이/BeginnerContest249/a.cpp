#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;
  int s1 = 0, d1 = 0;
  for (int i = 0; s1 < x; i++) {
    if (i % 2 == 0) {
      s1 += a;
      d1 += a;
      if (s1 > x)
        d1 -= (s1 - x);
    } else
      s1 += c;
  }
  d1 *= b;
  int s2 = 0, d2 = 0;
  for (int i = 0; s2 < x; i++) {
    if (i % 2 == 0) {
      s2 += d;
      d2 += d;
      if (s2 > x)
        d2 -= (s2 - x);
    } else
      s2 += f;
  }
  d2 *= e;
  if (d1 > d2)
    cout << "Takahashi\n";
  else if (d1 < d2)
    cout << "Aoki\n";
  else
    cout << "Draw\n";
  return 0;
}