#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  for (int i = 0; i < 6; i++) {
    cout << s[i % s.length()];
  }
  return 0;
}