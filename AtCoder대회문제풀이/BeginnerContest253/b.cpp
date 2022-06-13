#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  vector<pair<int, int>> p;
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c;
      cin >> c;
      if (c == 'o')
        p.push_back(make_pair(i, j));
    }
  }
  cout << abs(p[0].first - p[1].first) + abs(p[0].second - p[1].second) << endl;
  return 0;
}