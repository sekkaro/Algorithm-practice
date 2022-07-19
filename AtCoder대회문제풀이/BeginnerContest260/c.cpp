#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x, y;
  cin >> n >> x >> y;
  vector<ll> r(n + 1), b(n + 1);
  r[n] = 1;
  for (int i = n; i >= 2; i--) {
    r[i - 1] += r[i];
    b[i] += r[i] * x;

    r[i - 1] += b[i];
    b[i - 1] += b[i] * y;
  }
  cout << b[1] << endl;
  return 0;
}