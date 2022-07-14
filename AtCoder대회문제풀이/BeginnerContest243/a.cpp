#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int v, a, b, c;
  cin >> v >> a >> b >> c;
  int t = 0;
  while (1) {
    if (t == 0)
      v -= a;
    if (t == 1)
      v -= b;
    if (t == 2)
      v -= c;
    if (v < 0)
      break;
    t = (t + 1) % 3;
  }
  if (t == 0)
    cout << "F\n";
  if (t == 1)
    cout << "M\n";
  if (t == 2)
    cout << "T\n";
  return 0;
}