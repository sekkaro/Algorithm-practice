#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  map<char, int> cnt;
  for (char c : s) {
    cnt[c]++;
  }
  for (auto p : cnt) {
    if (p.second == 1) {
      cout << p.first << '\n';
      return 0;
    }
  }
  cout << -1 << '\n';
  return 0;
}