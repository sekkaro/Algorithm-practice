#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> s(4, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    s[0]++;
    for (int j = 3; j >= 0; j--) {
      if (s[j]) {
        if (j + a[i] > 3) {
          ans++;
        } else {
          s[j + a[i]] += s[j];
        }
        s[j] = 0;
      }
    }
  }
  cout << ans << endl;
  return 0;
}