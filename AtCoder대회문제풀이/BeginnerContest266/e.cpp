#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  double ans = 0;
  for (int i = 0; i < n; i++) {
    double now = 0;
    for (int j = 1; j <= 6; j++) {
      now += max((double)j, ans);
    }
    ans = now / 6;
  }
  printf("%.10f", ans);
  return 0;
}