#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  double d = 1 / sqrt((a * a) + (b * b));
  cout << setprecision(12);
  cout << d * a << " " << d * b << endl;
  return 0;
}