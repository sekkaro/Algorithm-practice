#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, r, c;
  cin >> h >> w >> r >> c;
  int ans = 0;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (abs(i - r) + abs(j - c) == 1)
        ans++;
    }
  }
  cout << ans << endl;
  return 0;
}