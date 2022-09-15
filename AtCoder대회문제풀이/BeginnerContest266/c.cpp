#include <bits/stdc++.h>
using namespace std;

struct V {
  int x, y;
  V(int x = 0, int y = 0) : x(x), y(y) {}
  V operator-(const V &a) const { return V(x - a.x, y - a.y); }
  int cross(const V &a) const { return x * a.y - y * a.x; }
  int ccw(const V &a) const {
    int area = cross(a);
    if (area > 0)
      return +1; // ccw
    if (area < 0)
      return -1; // cw
    return 0;    // collinear
  }
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<V> p(4);
  for (int i = 0; i < 4; i++) {
    cin >> p[i].x >> p[i].y;
  }
  for (int i = 0; i < 4; i++) {
    V A = p[i];
    V B = p[(i + 1) % 4];
    V C = p[(i + 2) % 4];
    V b = B - A, c = C - A;
    if (b.ccw(c) != 1) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}