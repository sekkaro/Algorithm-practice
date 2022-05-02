#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> s(n);
  s[0] = "1";
  for (int i = 1; i < n; i++) {
    char num = '0' + i;
    s[i] = s[i - 1] + num + s[i - 1];
  }
  for (int i = 0; i < s[n - 1].length(); i++) {
    cout << s[i] << " ";
  }
  return 0;
}