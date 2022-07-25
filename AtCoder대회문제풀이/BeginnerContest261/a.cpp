#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  cout << max(0, min(r1, r2) - max(l1, l2)) << '\n';
  return 0;
}