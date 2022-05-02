#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string ans = "0000";
  for (int i = 0; i < 3; i++) {
    if (s[i] == '1')
      ans[i + 1] = '1';
  }
  cout << ans << endl;
  return 0;
}