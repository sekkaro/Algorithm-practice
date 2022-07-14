#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  string s;
  cin >> n >> q;
  cin >> s;
  int p = 0;
  for (int i = 0; i < q; i++) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      p = (((p - x) % n) + n) % n;
    } else {
      x--;
      cout << s[(p + x) % n] << endl;
    }
  }
  return 0;
}