#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int ok = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((s[i][j] == 'W' && s[j][i] != 'L') ||
          (s[i][j] == 'L' && s[j][i] != 'W') ||
          (s[i][j] == 'D' && s[j][i] != 'D')) {
        ok = 0;
        break;
      }
    }
  }
  if (ok)
    cout << "correct\n";
  else
    cout << "incorrect\n";
  return 0;
}