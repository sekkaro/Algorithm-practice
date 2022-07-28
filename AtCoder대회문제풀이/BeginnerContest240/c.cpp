#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  bitset<10005> dp;
  dp[0] = 1;
  for (int i = 0; i < n; i++) {
    dp = (dp << a[i]) | (dp << b[i]);
  }
  if (dp[x])
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}