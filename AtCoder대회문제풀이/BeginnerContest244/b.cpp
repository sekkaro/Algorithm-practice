#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string t;
  cin >> n >> t;
  int x = 0, y = 0, d = 0;
  for (int i = 0; i < n; i++) {
    if (t[i] == 'S') {
      if (d == 0)
        x++;
      if (d == 1)
        y--;
      if (d == 2)
        x--;
      if (d == 3)
        y++;
    } else
      d = (d + 1) % 4;
  }
  cout << x << " " << y << endl;
  return 0;
}