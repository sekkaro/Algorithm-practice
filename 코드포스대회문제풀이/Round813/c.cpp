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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    map<int, int> am;
    int k = 0;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] > a[i + 1]) {
        int j = k;
        for (; j <= i; j++) {
          am[a[j]]++;
        }
        k = j;
      } else if (am.count(a[i + 1])) {
        int j = k;
        for (; j <= i + 1; j++) {
          am[a[j]]++;
        }
        k = j;
      }
    }
    cout << am.size() << '\n';
  }
  return 0;
}