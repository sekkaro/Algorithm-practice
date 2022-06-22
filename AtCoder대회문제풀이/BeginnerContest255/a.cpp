#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r, c;
  cin >> r >> c;
  int ans = 0;
  for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 2; j++) {
      int x;
      cin >> x;
      if (i == r && c == j)
        ans = x;
    }
  }
  cout << ans << endl;
  return 0;
}