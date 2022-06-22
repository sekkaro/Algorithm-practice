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
    ll sum = 0;
    for (int i = 0; i < m; i++) {
      int x;
      cin >> x;
      sum += x;
    }
    cout << a[sum % n] << endl;
  }
  return 0;
}