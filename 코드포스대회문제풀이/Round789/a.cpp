#include <algorithm>
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
    vector<int> a(n);
    int z = 0, d = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (!a[i])
        z++;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++) {
      if (a[i] == a[i + 1]) {
        d++;
        break;
      }
    }
    if (d || z) {
      cout << n - z << endl;
    } else {
      cout << n + 1 << endl;
    }
  }
  return 0;
}