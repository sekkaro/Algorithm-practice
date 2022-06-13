#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  multiset<int> s;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      s.insert(x);
    } else if (t == 2) {
      int x, c;
      cin >> x >> c;
      while (c--) {
        auto it = s.find(x);
        if (it == s.end())
          break;
        s.erase(it);
      }
    } else {
      cout << *s.rbegin() - *s.begin() << endl;
    }
  }
  return 0;
}