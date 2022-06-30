#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    int y = x & (-x);
    while (!(x ^ y) || !(x & y)) {
      y++;
    }
    cout << y << endl;
  }
  return 0;
}