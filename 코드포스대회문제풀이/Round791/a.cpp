#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    if (n % 2 != 0 || n < 4)
      cout << -1 << endl;
    else {
      ll MIN;
      if (n % 6 == 0) {
        MIN = n / 6;
      } else {
        MIN = (n / 6) + 1;
      }
      cout << MIN << " " << n / 4 << endl;
    }
  }
  return 0;
}