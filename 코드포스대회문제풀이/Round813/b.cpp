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
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      p[i] = i + 1;
    }
    for (int i = n - 1; i > 0; i -= 2) {
      swap(p[i], p[i - 1]);
    }
    for (int i = 0; i < n; i++) {
      cout << p[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}