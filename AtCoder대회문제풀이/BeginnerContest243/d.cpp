#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  ll x;
  cin >> n >> x;
  string s;
  cin >> s;
  string t = bitset<61>(x).to_string();
  for (char c : s) {
    if (c == 'U')
      t.pop_back();
    else if (c == 'L')
      t += '0';
    else
      t += '1';
  }
  cout << stoll(t, nullptr, 2) << endl;
  return 0;
}