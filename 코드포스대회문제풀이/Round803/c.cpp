#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

void solve() {
  int n;
  cin >> n;
  vector<int> pos, neg, a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x > 0)
      pos.push_back(x);
    else if (x < 0)
      neg.push_back(x);
    else if (a.size() < 2)
      a.push_back(x);
  }
  if (pos.size() > 2 || neg.size() > 2) {
    cout << "NO\n";
    return;
  }
  for (int x : pos) {
    a.push_back(x);
  }
  for (int x : neg) {
    a.push_back(x);
  }
  for (int i = 0; i < a.size(); i++) {
    for (int j = i + 1; j < a.size(); j++) {
      for (int k = j + 1; k < a.size(); k++) {
        int ok = 0;
        for (int l = 0; l < a.size(); l++) {
          if (a[i] + a[j] + a[k] == a[l]) {
            ok = 1;
            break;
          }
        }
        if (!ok) {
          cout << "NO\n";
          return;
        }
      }
    }
  }
  cout << "YES\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}