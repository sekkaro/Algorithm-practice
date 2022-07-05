#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  map<int, int> cnt;
  for (int i = 0; i < s.length(); i++) {
    cnt[s[i] - '0']++;
  }
  for (int i = 0; i < 10; i++) {
    if (!cnt[i])
      cout << i << endl;
  }
  return 0;
}