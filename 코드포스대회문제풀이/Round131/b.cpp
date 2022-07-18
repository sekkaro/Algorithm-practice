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
    cout << 2 << '\n';
    map<int, int> cnt;
    for (int i = 1; i <= n; i++) {
      if (cnt[i])
        continue;
      for (int j = i; j <= n; j *= 2) {
        cout << j << " ";
        cnt[j]++;
      }
    }
    cout << '\n';
  }
  return 0;
}