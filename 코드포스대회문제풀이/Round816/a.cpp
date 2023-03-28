#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int MIN = min(n, m), MAX = max(n, m);
    if (MIN == 1)
      if (MAX == 1)
        cout << 0 << '\n';
      else
        cout << MAX << '\n';
    else
      cout << MAX + MIN * 2 - 2 << '\n';
  }
  return 0;
}