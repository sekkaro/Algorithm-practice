#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  cout << setprecision(12);
  double ans;
  if (x <= a)
    ans = 1;
  else if (x > a && x <= b)
    ans = 1.0 * c / (b - a);
  else
    ans = 0;
  cout << ans << endl;
  return 0;
}