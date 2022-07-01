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
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    vector<int> a = p;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
      if (a[i] == p[i]) {
        if (i < n - 1)
          swap(a[i], a[i + 1]);
        else if (i > 0)
          swap(a[i], a[i - 1]);
      }
    }
    if (n == 1)
      cout << -1 << endl;
    else {
      for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}