#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;
  if (m < x)
    cout << t - ((x - m) * d) << endl;
  else
    cout << t << endl;
  return 0;
}