#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    n = n * 2 + 1;
    char c = 0;
    while (n--) {
      string s;
      cin >> s;
      for (auto x : s) {
        c ^= x;
      }
    }
    cout << c << endl;
  }
  return 0;
}