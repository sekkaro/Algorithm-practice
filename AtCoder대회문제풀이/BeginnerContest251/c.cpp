#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<string, int> cnt;
  int ans = 0, max = 0;
  for (int i = 1; i <= n; i++) {
    string s;
    int t;
    cin >> s >> t;
    if (!cnt[s] && t > max) {
      ans = i;
      max = t;
    }
    cnt[s]++;
  }
  cout << ans << endl;
  return 0;
}