#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> h(n * 2);
    for (int i = 0; i < n * 2; i++) {
      cin >> h[i];
    }
    sort(h.begin(), h.end());
    int ok = 1;
    for (int i = 0; i < n; i++) {
      if (h[i + n] - h[i] < x) {
        ok = 0;
        break;
      }
    }
    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}