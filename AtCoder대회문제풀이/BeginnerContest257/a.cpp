#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  char ans = 'A' + ceil(1.0 * x / n) - 1;
  cout << ans << endl;
  return 0;
}