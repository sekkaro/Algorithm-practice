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
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a[n - 1] > b[m - 1]) {
      cout << "Alice\nAlice\n";
    } else if (a[n - 1] < b[m - 1]) {
      cout << "Bob\nBob\n";
    } else {
      cout << "Alice\nBob\n";
    }
  }
  return 0;
}