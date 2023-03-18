#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<int> ans(w, 0);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c;
      cin >> c;
      if (c == '#')
        ans[j]++;
    }
  }
  for (int i = 0; i < w; i++) {
    cout << ans[i] << ' ';
  }
  cout << '\n';
  return 0;
}