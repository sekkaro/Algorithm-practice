#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  int t[3][2] = {0};
  int v[3] = {4, 2, 1};
  for (int i = 0; i < 3; i++) {
    if (a >= v[i]) {
      a -= v[i];
      t[i][0]++;
    }
    if (b >= v[i]) {
      b -= v[i];
      t[i][1]++;
    }
  }
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    if (t[i][0] || t[i][1])
      ans += v[i];
  }
  cout << ans << '\n';
  return 0;
}