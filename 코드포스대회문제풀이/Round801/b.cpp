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
    if (n % 2 == 0) {
      int minm = 1e9 + 1, minj = 1e9 + 1, m = 0, j = 0;
      for (int i = 0; i < n; i += 2) {
        if (a[i] < minm) {
          minm = a[i];
          m = i;
        }
        if (a[i + 1] < minj) {
          minj = a[i + 1];
          j = i + 1;
        }
      }
      if (minm < minj || (minm == minj && j > m)) {
        cout << "Joe\n";
      } else
        cout << "Mike\n";
    } else
      cout << "Mike\n";
  }
  return 0;
}