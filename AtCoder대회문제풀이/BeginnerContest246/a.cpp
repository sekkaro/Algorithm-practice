#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x1, x2, x3, y1, y2, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  map<int, int> x, y;
  x[x1]++;
  x[x2]++;
  x[x3]++;
  y[y1]++;
  y[y2]++;
  y[y3]++;
  for (auto p : x) {
    if (p.second == 1) {
      cout << p.first;
      break;
    }
  }
  for (auto p : y) {
    if (p.second == 1) {
      cout << " " << p.first << endl;
      break;
    }
  }
  return 0;
}