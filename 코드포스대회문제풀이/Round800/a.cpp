#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int ok = (b >= a) ? 1 : 0;
    while (a > 0 || b > 0) {
      if ((ok && b > 0) || (a == 0 && b > 0)) {
        cout << 1;
        b--;
        ok = 0;
      } else if (a > 0) {
        cout << 0;
        a--;
        ok = 1;
      }
    }
    cout << endl;
  }
  return 0;
}