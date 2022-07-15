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
    if (n % 2 == 0)
      cout << 0 << " " << 0 << " " << n / 2 << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}