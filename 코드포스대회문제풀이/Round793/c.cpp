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
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      cnt[x]++;
    }
    int s = 0, d = 0;
    for (auto x : cnt) {
      s += x.second == 1;
      d += x.second > 1;
    }
    cout << d + (s + 1) / 2 << endl;
  }
  return 0;
}