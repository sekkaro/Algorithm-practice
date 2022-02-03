#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int ones = 0, zeros = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        zeros++;
      } else {
        ones++;
      }
    }
    if (zeros == 0 || ones == 0)
      cout << 0 << endl;
    else if (zeros == ones)
      cout << zeros - 1 << endl;
    else if (zeros < ones)
      cout << zeros << endl;
    else
      cout << ones << endl;
  }
  return 0;
}