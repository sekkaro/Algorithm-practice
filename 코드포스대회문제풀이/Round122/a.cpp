#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int z = 0, ans = 0;
    int min = n < 100 ? 14 : 105;
    int max = n < 100 ? 100 : 1000;
    for (int i = min; i < max; i += 7) {
      int j = i;
      int k = n;
      int c = 0;
      while (j) {
        if (k % 10 == j % 10)
          c++;
        j /= 10;
        k /= 10;
      }
      if (c > z) {
        z = c;
        ans = i;
      }
    }
    cout << ans << endl;
  }
  return 0;
}