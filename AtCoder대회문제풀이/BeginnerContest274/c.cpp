#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<int> ans(2 * n + 2, 0);
  for (int i = 1; i <= n; i++) {
    ans[i * 2] = ans[a[i]] + 1;
    ans[i * 2 + 1] = ans[a[i]] + 1;
  }
  for (int i = 1; i <= 2 * n + 1; i++) {
    cout << ans[i] << '\n';
  }
  return 0;
}