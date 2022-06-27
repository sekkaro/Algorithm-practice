#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int o = 0, e = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x % 2 == 0)
        e++;
      else
        o++;
    }
    cout << min(e, o) << endl;
  }
  return 0;
}