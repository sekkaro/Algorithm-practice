#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<string> g(h);
  for (int i = 0; i < h; i++) {
    cin >> g[i];
  }
  vector<vector<int>> c(h, vector<int>(w, 0));
  int i = 0, j = 0, ok = 1;
  while (i >= 0 && i < h && j >= 0 && j < w) {
    if (c[i][j]) {
      ok = 0;
      break;
    }
    c[i][j]++;
    if (g[i][j] == 'U')
      i--;
    else if (g[i][j] == 'D')
      i++;
    else if (g[i][j] == 'L')
      j--;
    else
      j++;
  }
  if (!ok)
    cout << "-1\n";
  else {
    if (j == w)
      j--;
    else if (j < 0)
      j++;
    else if (i == h)
      i--;
    else
      i++;
    cout << i + 1 << ' ' << j + 1 << '\n';
  }
  return 0;
}