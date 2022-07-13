#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  int ok = 1;
  for (int i = 0, j = 0; j < t.length(); j++) {
    if (s[i] == t[j])
      i++;
    else if (i < 1 || s[i - 2] != t[j]) {
      ok = 0;
      break;
    }
  }
  if (ok)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}