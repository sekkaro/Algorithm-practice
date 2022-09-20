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
      a[i] = i + 1;
    }
    cout << n << '\n';
    for (int j = 0; j < n; j++) {
      cout << a[j] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n - 1; i++) {
      swap(a[i], a[i + 1]);
      for (int j = 0; j < n; j++) {
        cout << a[j] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}