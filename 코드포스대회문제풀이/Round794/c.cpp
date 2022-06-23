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
    vector<int> b = a;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0)
        b[i] = a[i / 2];
      else
        b[i] = a[(n + 1) / 2 + (i / 2)];
    }
    int ok = 1;
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        if (!((b[n - 1] < b[i] && b[i] > b[i + 1]) ||
              (b[n - 1] > b[i] && b[i] < b[i + 1]))) {
          ok = 0;
          break;
        }
      } else if (!((b[i - 1] < b[i] && b[i] > b[(i + 1) % n]) ||
                   (b[i - 1] > b[i] && b[i] < b[(i + 1) % n]))) {
        ok = 0;
        break;
      }
    }
    if (ok) {
      cout << "YES\n";
      for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
      }
      cout << endl;
    } else
      cout << "NO\n";
  }
  return 0;
}