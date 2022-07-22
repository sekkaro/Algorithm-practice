#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> a(10);
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  int ans = a[0];
  for (int i = 0; i < 2; i++) {
    ans = a[ans];
  }
  cout << ans << '\n';
  return 0;
}