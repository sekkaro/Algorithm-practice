#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.length();
  map<char, int> cnt;
  for (int i = 0; i < n; i++) {
    cnt[s[i]]++;
  }
  int ok = 1, low = 0, up = 0;
  for (auto x : cnt) {
    if (x.second > 1) {
      ok = 0;
      break;
    }
    char c = x.first;
    if (c >= 'a' && c <= 'z')
      low++;
    else if (c >= 'A' && c <= 'Z')
      up++;
  }
  if (ok && low && up)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}