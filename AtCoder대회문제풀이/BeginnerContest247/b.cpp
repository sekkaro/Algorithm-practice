#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  map<string, int> cnt;
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
    cnt[s[i]]++;
    cnt[t[i]]++;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      if (((s[i] == s[j] || s[i] == t[j]) && cnt[t[i]] >= 2) ||
          ((t[i] == t[j] || t[i] == s[j]) && cnt[s[i]] >= 2)) {
        cout << "No\n";
        return 0;
      }
    }
  }
  cout << "Yes\n";
  return 0;
}