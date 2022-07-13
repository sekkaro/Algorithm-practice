#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  double a, b, d;
  cin >> a >> b >> d;
  cout << setprecision(12);
  double r = 2 * M_PI * (d / 360);
  cout << (a * cos(r)) - (b * sin(r)) << " " << (a * sin(r)) + (b * cos(r))
       << endl;
  return 0;
}