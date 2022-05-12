#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int> a, int cnt) {
  for (int i = 0; i < cnt - 1; i++) {
    if (a[i] < a[i + 1])
      return false;
  }
  for (int i = cnt; i < a.size() - 1; i++) {
    if (a[i] > a[i + 1])
      return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] < 0) {
        a[i] = abs(a[i]);
        cnt++;
      }
    }
    if (isSorted(a, cnt)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}