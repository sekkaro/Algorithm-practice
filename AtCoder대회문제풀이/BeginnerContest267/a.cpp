#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string si[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
  string s;
  cin >> s;
  int n = si->length();
  for (int i = 0; i < n; i++) {
    if (si[i] == s)
      cout << n - i - 1 << '\n';
  }
  return 0;
}