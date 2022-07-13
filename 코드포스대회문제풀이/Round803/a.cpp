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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      int now = -1;
      for (int j = 0; j < n; j++) {
        if (i == j)
          continue;
        if (now < 0)
          now = a[j];
        else
          now ^= a[j];
      }
      if (now == a[i]) {
        cout << now << endl;
        break;
      }
    }
  }
  return 0;
}