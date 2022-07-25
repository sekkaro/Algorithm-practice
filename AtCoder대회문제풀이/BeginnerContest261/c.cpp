#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<string, int> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (m[s])
      cout << s + "(" + to_string(m[s]) + ")" << '\n';
    else
      cout << s << '\n';
    m[s]++;
  }
  return 0;
}