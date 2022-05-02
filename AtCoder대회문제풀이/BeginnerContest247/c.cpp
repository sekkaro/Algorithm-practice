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
    s[i] = s[i - 1] + " " + to_string(i + 1) + " " + s[i - 1];
  }
  cout << s[n - 1] << endl;
  return 0;
}